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
        if card[1]=="A":
            if card[2] =="B":
                a = a+b
            else:
                a = a+a
        else:
            if card[2] =="B":
                b = b+b
            else:
                b = b+a        
    elif card[0]=="4":
        if card[1]=="A":
            if card[2] =="B":
                a = a*b
            else:
                a = a*a
        else:
            if card[2] =="B":
                b = b*b
            else:
                b = b*a
    elif card[0]=="5":
        if card[1]=="A":
            if card[2] =="B":
                a = a-b
            else:
                a = a-a
        else:
            if card[2] =="B":
                b = b-b
            else:
                b = b-a        
    elif card[0]=="6":
        if card[1]=="A":
            if card[2] =="B":
                a = int(a/b)
            else:
                a = int(a/a)
        else:
            if card[2] =="B":
                b = int(b/b)
            else:
                b = int(b/a)
    elif card[0]=="7":
        break
    card = input().split(" ")