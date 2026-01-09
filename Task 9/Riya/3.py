import cv2

img1 = cv2.imread("assets/pic3.jpeg")
img2 = cv2.imread("assets/pic3.jpeg")
text=input("enter text")
cv2.putText(img2, text, (300, 300),
            cv2.FONT_ITALIC, 4, (0, 255, 255), 5)

img1 = cv2.resize(img1, (500, 500))
img2 = cv2.resize(img2, (500, 500))

blend = cv2.addWeighted(img1, 0.7, img2, 0.6, 0)

cv2.imshow("Image", blend)
cv2.waitKey(0)
cv2.destroyAllWindows()
