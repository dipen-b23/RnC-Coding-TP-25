import cv2
from ultralytics import YOLO
import time
import requests
import json

# Replace with your ESP32-CAM IP address
ESP32_IP = "192.168.1.XX"
STREAM_URL = f"http://{ESP32_IP}/stream"
UPDATE_URL = f"http://{ESP32_IP}/update"

# Start video capture from the HTTP stream
cap = cv2.VideoCapture(STREAM_URL)

while True:
    ret, frame = cap.read()
    if not ret:
        print("Failed to fetch frame")
        break

    # --- AI LOGIC HERE (Example: Simple text) ---
    detected_label = "Forward"  # Replace with your AI model output
    
    # Send the label back to the ESP32 as JSON
    data = {"label": detected_label, "confidence": 0.95}
    try:
        requests.post(UPDATE_URL, json=data, timeout=0.1)
    except:
        pass

model = YOLO("C:/Users/bhavi/OASIS/second trial/detection_trial8.pt")

ESP_RES = (320, 240) 
inference_size = 416
delay_seconds = 1 
last_detection_time = 0
results = None 

while True: 
    ret, frame = cap.read()
    if not ret: break

    # Simulated ESP32 processing
    simulated = cv2.resize(frame, ESP_RES)
    simulated = cv2.GaussianBlur(simulated, (3, 3), 0)
    #gray = cv2.cvtColor(simulated, cv2.COLOR_BGR2GRAY)
    #gray=simulated
    #frame_for_yolo = cv2.cvtColor(gray, cv2.COLOR_GRAY2BGR)
    frame_for_yolo = simulated
    current_time = time.time()

    if current_time - last_detection_time > delay_seconds:
        # Run model (verbose=True ensures YOLO prints its own summary to console)
        results = model(frame_for_yolo, imgsz=inference_size, verbose=True)
        last_detection_time = current_time

        # --- ADDED: PRINT TO CONSOLE ---
        print("-" * 30)
        if results and len(results[0].boxes) > 0:
            for box in results[0].boxes:
                class_id = int(box.cls[0])
                label = model.names[class_id]
                conf = box.conf[0]
                if label == "stop_sign" and conf < 0.80:
                    continue
                print(f"Detected: {label} | Confidence: {conf:.2f}")
        else:
            print("No objects detected.")

    # Display Logic
    display_frame = cv2.resize(frame_for_yolo, (640, 480), interpolation=cv2.INTER_NEAREST)
    scale_x, scale_y = 640/320, 480/240

    if results:
        for box in results[0].boxes:
            x1, y1, x2, y2 = map(int, box.xyxy[0])
            cv2.rectangle(display_frame, (int(x1*scale_x), int(y1*scale_y)), 
                          (int(x2*scale_x), int(y2*scale_y)), (0, 255, 0), 2)
    
    cv2.imshow('Inference View', display_frame)
    if cv2.waitKey(1) & 0xFF == ord('q'): break

cap.release()
cv2.destroyAllWindows()