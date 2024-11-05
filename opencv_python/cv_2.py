import cv2

img=cv2.imread("cap.jpg",-1) # adding 1 , O , -1 will read the image in different modes

def aut(name,param):
    cv2.imshow(name,param)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

# display image in multiple modes
#aut("image",img)

#capture video
cap = cv2.VideoCapture(0)
""""
while (True):
    ret , frame=cap.read()
    cv2.imshow("capture",frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
      break
      cap.release()
cv2.destroyAllWindows()
"""

#saving video 
if (cap.isOpened() == False):
    print("Camera could not be opened")

frame_width= int(cap.get(3))
frame_height=int(cap.get(4))

video_codec=cv2.VideoWriter_fourcc(*'mp4v')
video_output=cv2.VideoWriter('captured_video.MP4',video_codec,30,(frame_width,frame_height))
while (True):
    ret, frame=cap.read()
    if ret== True:
     video_output.write(frame)
     cv2.imshow('frame',frame)
     if cv2.waitKey(1) & 0xFF == ord('q'):
         break
    
    else:
       break
cap.release()
video_output.release()
cv2.destroyAllWindows()
print('Video was saved successfully')
 
     