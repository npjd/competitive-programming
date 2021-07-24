
steps = []

while True:
    string = input()
    if string == "99999":
        break
    num1 = int(string[0])
    num2 = int(string[1])
    sum = num1 + num2
    if sum ==0:
        step = steps[-1]
    elif sum %2 ==0:
        step = "right"
        steps.append(step)
    elif sum %2 ==1:
        step = "left"
        steps.append(step)
    finalNum = string[2:]
    finalNum = int(finalNum)

    print(step + " " + str(finalNum))    
