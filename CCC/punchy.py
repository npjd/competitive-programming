a = 0
b = 0

card = input().split(" ")
while True:
    if card[0]=="1":
        if card[1]=="A":
            a = int(card[2])
        else:
            b = int(card[2])
    elif card[0]=="2":
        if card[1]=="A":
            print(a)
        else:
            print(b)
    elif card[0]=="3":
        a = a+b
    elif card[0]=="4":
        a = a*b
    elif card[0]=="5":
        a = a-b
    elif card[0]=="6":
        a = a//b
    elif card[0]=="7":
        break
    card = input().split(" ")

