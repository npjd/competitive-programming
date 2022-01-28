c,r = input().split(' ')
c = int(c)
r = int(r)

x = 0
y = 0

dx,dy = input().split(' ')
dx = int(dx)
dy = int(dy)

while (dx != 0 or dy!=0):
    x += dx
    y += dy
    if x>c:
        x=c
    if x<0:
        x=0
    if y > r:
        y = r
    if y < 0:
        y = 0
    print(x,y)
    dx,dy = input().split(' ')
    dx = int(dx)
    dy = int(dy)
