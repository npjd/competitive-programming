from itertools import permutations
n = int(input())
boxes = [[] for i in range(n)]
for box in range(n):
    boxes[box] = [int(i) for i in input().split()]
def getMult(x1):
    x,y,z = x1
    return x * y * z
m = int(input())

boxes = sorted(boxes, key = lambda x: getMult(x))

for placeholder in range(m):
    x2,y2,z2 = [int(i) for i in input().split()]
    boxFound = False
    for box in range(len(boxes)):
        x1,y1,z1 = boxes[box]
        for i in permutations([x2,y2,z2]):
            x,y,z = i
            if x <= x1 and y <= y1 and z <= z1:
                print(x1 * y1 * z1)
                boxFound = True
                break
        if boxFound:
            boxFound = False
            break
        elif box == n - 1:
            print('Item does not fit.')
