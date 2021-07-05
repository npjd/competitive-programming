t = int(input())

for _ in range(t):
    n = int(input())
    carts = []
    branch = []
    target = 1
    for i in range(n):
        carts.append(int(input()))
    while True:
        if len(carts) >0:
            if carts[-1] == target:
                target+=1
                carts.pop()
            elif len(branch) > 0:
                if branch[-1] == target:
                    branch.pop()
                    target+=1
                else:
                    branch.append(carts[-1])            
                    carts.pop()
            else:
                branch.append(carts[-1])
                carts.pop()
        elif len(branch) > 0:
            if branch[-1] == target:
                target+=1
                branch.pop()
            else:
                print("N")
                break
        else:
            print("Y")
            break



