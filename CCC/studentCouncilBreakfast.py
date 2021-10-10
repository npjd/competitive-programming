pink = int(input())
green = int(input())
red = int(input())
orange = int(input())

moneyNeeded = int(input())

minimun = moneyNeeded
combinations =0
used =[]

def recursion(pc,gc,rc,oc):
    global pink,green,red,orange,moneyNeeded,minimum,combinations,used
    if pc*pink + gc*green + rc*red + oc*orange == moneyNeeded and [pc,gc,rc,oc] not in used:
        combinations +=1        
        minimum = min(pc+gc+rc+oc,moneyNeeded)
        used.append([pc,gc,rc,oc])
        return
    elif pc*pink + gc*green + rc*red + oc*orange < moneyNeeded:
        recursion(pc+1,gc,rc,oc)
        recursion(pc,gc+1,rc,oc)
        recursion(pc,gc,rc+1,oc)
        recursion(pc,gc,rc,oc+1)

recursion(0,0,0,0)
print(used)
print(combinations)
print(minimum)