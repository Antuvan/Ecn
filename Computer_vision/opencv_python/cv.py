import cv2

img_path= "cap.jpg"
image= cv2.imread(img_path)
"""
cv2.imshow("sample image",image)
cv2.waitKey(0)
cv2.destroyAllWindows()


dir=r'/home/ajay/Ajay/ecn/Master2/opencv'
filename ='savedImagetest.png'
cv2.imwrite(filename,image)
print("successfully saved")


print(image.shape)
"""

#changing colour space
""""
gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
cv2.imshow('Gray scale image',gray)
cv2.waitKey(0)
cv2.destroyAllWindows()
"""
# resize image
"""
resize= cv2.resize(image,(800,800))
cv2.imshow("original image",image)
cv2.imshow('Gray scale image',resize)
cv2.waitKey(0)
cv2.destroyAllWindows()
"""
#displaying text on the image

def aut(name,param):
    cv2.imshow(name,param)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
"""
text="Captian America"
coordinates=(200,200)
font=cv2.FONT_HERSHEY_DUPLEX
texted_image=cv2.putText(image,text,coordinates,font,6,(152,252,45),3)
aut("texted_image",texted_image)
"""

#drawing line on image we need start point end point and thickness of line
"""
start_point =(50,50)
end_point =(200,200)
color = (125,54,3)
thickness =3
line=cv2.line(image,start_point,end_point,color,thickness)
aut("line in image",line)
"""
#drawing circle on image
"""
center=(200,200)
radius=50 
color = (125,54,3)
thickness =3
circle=cv2.circle(image,center,radius,color,thickness)
aut("circle in image",circle)
"""
#Drawing rectange in image

"""
start_point =(50,50)
end_point =(200,200)
color = (125,54,3)
thickness =3
    
rectangle=cv2.rectangle(image,start_point,end_point,color,thickness)
aut("rectange on image",rectangle)


"""
#drawing ellipse on image

center=(200,200)
axes=(500,252)
start_angle =0
end_angle =360

color = (125,54,3)
thickness =3
ellipse=cv2.ellipse(image,center,axes,30,start_angle,end_angle,color,thickness)    
aut("Ellipse on image",ellipse)