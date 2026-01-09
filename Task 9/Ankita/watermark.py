#Image Watermarking Problem
#Write a program using OpenCV to load an image from the system.
#Add a text or logo watermark at a user-defined position using transparency.
#Save the final watermarked image as a new file.

import numpy as np
import cv2

img =  cv2.imread('/Users/ankitadeylaik/PycharmProjects/OPENCVSTUFF/lotus.jpg', cv2.IMREAD_COLOR)
temp = img.copy()
logo =  cv2.imread('/Users/ankitadeylaik/PycharmProjects/OPENCVSTUFF/logo.PNG', cv2.IMREAD_UNCHANGED)
logo = cv2.resize(logo, (logo.shape[1] // 5, logo.shape[0] // 5))
h,w = logo.shape[:2]
i = input("Enter 1 to add text, input 0 to add logo water mark: ")

if i == "1":
    font = cv2.FONT_HERSHEY_SIMPLEX
    text = input("Enter text: ")
    x, y = int(input("Enter width position: ")), int(input("Enter height position: "))
    overlay = img.copy()
    cv2.putText(overlay,text,(x, y),font,2,(203, 192, 255),2,cv2.LINE_AA)
    opacity = float(input("Enter opacity: "))
    img = cv2.addWeighted(overlay, opacity, img, 1-opacity, 0)

elif i == "0":
    x, y = int(input("Enter width position: ")), int(input("Enter height position: "))
    temp = img[y:y + h, x:x + w]
    result = cv2.addWeighted(temp, 1, logo[ :, :, :3], 1, 0)
    img[y:y+h, x:x+w] = result

cv2.imshow('img', img)
cv2.waitKey(0)
cv2.destroyAllWindows()



