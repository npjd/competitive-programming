quarters = int(input())
slot1 = int(input())
slot2 = int(input())
slot3 = int(input())
plays = 0

while quarters >0:
    slot1+=1
    quarters-=1
    plays+=1
    if slot1==35:
        quarters+=30
        slot1=0
    if quarters == 0:
        break
    slot2+=1
    quarters-=1
    plays+=1
    if slot2==100:
        quarters+=100
        slot2=0
    if quarters == 0:
        break
    slot3+=1
    quarters-=1
    plays+=1
    if slot3==10:
        quarters+=9
        slot3=0
    if quarters == 0:
        break

print("Martha plays "+str(plays)+" times before going broke.")