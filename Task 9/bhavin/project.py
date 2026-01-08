import cv2
import numpy as np

img1 = cv2.imread('Assets/nice wallpapers.jpg')
img2 = cv2.imread('Assets/Screenshot 2025-12-05 111814.png')
img2 = cv2.resize(img2,(0,0),fx=0.5,fy=0.5)
img = cv2.imread('Assets/nice wallpapers.jpg')
height = int(input("enter height from the above values"))
length = int(input("enter length from the above values"))
h1,l1 = img2.shape[:2]
img[height-int(h1//2):height+int(h1//2),length-int(l1//2):length+int(l1//2)] = img2
img = cv2.putText(img,'FINALLY', (200,100),cv2.FONT_HERSHEY_COMPLEX,4,(0,0,0),5,cv2.LINE_AA)
alpha = 1.0  
beta = 0.3   
gamma = 0    

result = cv2.addWeighted(img1, alpha, img, beta, gamma)
cv2.imshow('frame',result)
cv2.waitKey(0)
cv2.destroyAllWindows()