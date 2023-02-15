import math


realPartC = 0.01
 
imagPartC = -0.64


arrSeen = []
counter = 0
realPart = 0
imagPart = 0
def normal_round(num, ndigits=0):
    """
    Rounds a float to the specified number of decimal places.
    num: the value to round
    ndigits: the number of digits to round to
    """
    if ndigits == 0:
        return int(num + 0.5)
    else:
        digit_value = 10 ** ndigits
        return int(num * digit_value + 0.5) / digit_value
while True:
    tempRealPart = realPart
    realPart = tempRealPart**2 - imagPart**2
    imagPart = tempRealPart * imagPart *2
    
    
    realPart = realPart + realPartC
    imagPart = imagPart + imagPartC
    
    realPart = normal_round(realPart,2)
    imagPart = normal_round(imagPart,2)

    arrSeen.append((realPart,imagPart))
    absValue = math.sqrt(realPart**2 + imagPart**2)
    print(arrSeen)
    if absValue > 4:
        print("ESCAPES",counter+1)
        break
    elif arrSeen.count((realPart,imagPart)) ==2:
        print(realPart,imagPart)
        print(counter)
        break
    else:
        counter +=1


        