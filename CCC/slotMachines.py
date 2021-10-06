quarters = int(input())
slot1 = int(input())
slot2 = int(input())
slot3 = int(input())
plays = 0

while quarters >0:
    plays +=1
    if plays % 3 == 0:
        slot3+=1
        if slot3%10==0:
            quarters+=9
    elif plays % 2 == 0:
        slot2+=1
        if slot2%100==0:
            quarters+=60
    else:
        slot1+=1
        if slot1%35==0:
            quarters+=30
    quarters -=1

print("Martha plays "+str(plays)+" times before going broke.")