dice = int(input())
pos = 1
while True:
    for i in range(dice):
        pos +=1
        if pos == 100:
            print("You are now on square", pos)
            print("You Win!")
            break
    if pos ==100:
        break
    if pos ==9:
        pos = 34
    elif pos ==40:
        pos = 64
    elif pos ==67:
        pos = 86
    elif pos ==54:
        pos = 19
    elif pos ==90:
        pos = 48
    elif pos ==99:
        pos = 77
    print("You are now on square", pos)
    dice = int(input())
    if dice ==0:
        print("You Quit!")
        break