#Image Watermarking Problem
#Write a program using OpenCV to load an image from the system.
#Add a text or logo watermark at a user-defined position using transparency.
#Save the final watermarked image as a new file.
import cv2
import numpy as np
img=cv2.imread('assets/pic4.jpeg')
text=input('Enter the text you want to add')
a=int(input('Enter the position you want to add the text to'))
b=int(input('Enter the position you want to add the text to'))
cv2.putText(img, text, (a, b),
            cv2.FONT_HERSHEY_SIMPLEX, 4, (0, 255, 255), 5)
cv2.imshow('Image',img)
cv2.imwrite('assets/new_picture.png',img)
cv2.waitKey(0)
cv2.destroyAllWindows()
