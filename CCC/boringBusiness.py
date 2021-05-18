# frankly I don't want to use cpp for this problem just because of all the dictionaries and lists

tunnels = {}

for x in range(-200,201):
    for y in range(-200,0):
        tunnels[(x,y)] = False
tunnels[(0,-1)] = True
tunnels[(0,-2)] = True
tunnels[(0,-3)] = True
tunnels[(1,-3)] = True
tunnels[(2,-3)] = True
tunnels[(3,-3)] = True
tunnels[(3,-4)] = True
tunnels[(3,-5)] = True
tunnels[(4,-5)] = True
tunnels[(5,-5)] = True
tunnels[(5,-4)] = True
tunnels[(5,-3)] = True
tunnels[(6,-3)] = True
tunnels[(7,-3)] = True
tunnels[(7,-4)] = True
tunnels[(7,-5)] = True
tunnels[(7,-6)] = True
tunnels[(7,-7)] = True
tunnels[(6,-7)] = True
tunnels[(5,-7)] = True
tunnels[(4,-7)] = True
tunnels[(3,-7)] = True
tunnels[(2,-7)] = True
tunnels[(1,-7)] = True
tunnels[(0,-7)] = True
tunnels[(-1,-7)] = True
tunnels[(-1,-6)] = True
tunnels[(-1,-5)] = True

x = -1
y=-5
ok = True
raw_input = input()
direction, value = raw_input.split(" ")

while ok and direction !="q":
    dy= 0
    dx = 0  
    value = int(value)
    if direction =="l":
        dx=-1
    if direction =="r":
        dx=1
    if direction =="d":
        dy=-1
    if direction =="u":
        dy=1
    for i in range(value):
        x+=dx
        y+=dy
        if tunnels[(x,y)]==True:
            ok = False
        else:
            tunnels[(x,y)]==True         
    if ok:
        print(f"{x} {y} safe")
    else:
        print(f"{x} {y} DANGER")
    raw_input = input()
    direction, value = raw_input.split(" ")