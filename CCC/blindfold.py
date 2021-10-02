

r = int(input())
c = int(input())

grid = [ [] for _ in range(r) ]

for i in range(r):
    row = input()
    for j in range(c):
        grid[i].append(row[j])
    
m = int(input())
moves = []
for i in range(m):
    moves.append(input())

def check(x,y,moves,dir):
    posx = x
    posy = y
    i = 0
    while (posx>=0 and posx<r and posy>=0 and posy<c and (grid[posx][posy]=='.' or grid[posx][posy]=='*') and i < len(moves)):
        if moves[i] == 'R':
            dir -= 90
            if dir < 0:
                dir += 360
        elif moves[i] == 'L':
            dir += 90
            if dir >= 360:
                dir -= 360
        elif moves[i] == 'F':
            if dir == 0:
                posy += 1
            elif dir == 90:
                posx += 1
            elif dir == 180:
                posy -= 1
            elif dir == 270:
                posx -= 1
        i += 1
    if posx>=0 and posx<r and posy>=0 and posy<c and (grid[posx][posy]=='.' or grid[posx][posy]=='*') and i >= len(moves):
        # print(x,y,dir)
        return True

for i in range(r):
    for j in range(c):
        for dir in range(0,361,90):
            bool = check(i,j,moves,dir)
            if bool:
                grid[i][j] = '*'

for i in range(r):
    for j in range(c):
        print(grid[i][j],end='')
    print("")

