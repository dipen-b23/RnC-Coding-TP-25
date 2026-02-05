import cv2
from ultralytics import YOLO
import time
import asyncio
import websockets
import json

ESP32_IP = "adresss" #website adress
async def send_command(label, value=0):
    try:
        async with websockets.connect(ESP32_IP) as websocket:
            # Create the JSON payload
            data = {
                "label": label,
                "value": value
            }
            # Send to ESP32
            await websocket.send(json.dumps(data))
            print(f"Sent: {label}")
    except Exception as e:
        print(f"Error connecting: {e}")

model = YOLO("C:/Users/bhavi/OASIS/detection.pt")
cap = cv2.VideoCapture(ESP32_IP)

delay_seconds = 1  # Set your desired delay here
last_detection_time = 0
results = None # Initialize variable to store last detection

while True: 
    ret, frame = cap.read()
    if not ret: break

    # 1. Convert to real grayscale (1 channel)
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # 2. Convert back to BGR (3 channels) so YOLO doesn't crash
    # It will still LOOK gray, but it has the 'shape' the model expects
    frame_for_yolo = cv2.cvtColor(gray, cv2.COLOR_GRAY2BGR)

    current_time = time.time()

    # Only run the model if the delay has passed
    if current_time - last_detection_time > delay_seconds:
        results = model(frame_for_yolo)
        last_detection_time = current_time

    # Always draw the boxes from the LAST known detection so they stay on screen
    if results:
        for bbox in results[0].boxes.xyxy:
            x1, y1, x2, y2 = map(int, bbox)
            cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 5)
    
    cv2.imshow('YOLO Live Detection 4', frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
