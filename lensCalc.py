objectHeight = float(input("What is the height of the object?"))
objectDistance = float(input("What is the distance of the object?"))
focalLength = float(input("What is the focalLength?"))

imageDistance = (1/((1/focalLength)-(1/objectDistance)))
imageHeight =(((-imageDistance)/objectDistance)*objectHeight)
magnification = (imageHeight/objectHeight)

print("Image Distance is:", imageDistance)
print("Image Height is:", imageHeight)
print("Magnification is:", magnification)
