import cv2
import numpy as np
img=cv2.imread('assets/pic4.jpeg')
text=input('Enter the text you want to add')
#a=int(input('Enter the position you want to add the text to'))
#b=int(input('Enter the position you want to add the text to'))
a=99
b=222
cv2.putText(img, text, (a, b),
            cv2.FONT_HERSHEY_TRIPLEX , 4, (0, 255, 255), 5)
cv2.imshow('Image',img)
cv2.imwrite('assets/new_picture.png',img)
cv2.waitKey(0)
cv2.destroyAllWindows()