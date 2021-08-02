tests = int(input())

for test in range(tests):
    carts = []
    branch = []
    n = int(input())
    for i in range(n):
        carts.append(int(input()))
    target = 1
    while True:
        if len(carts)>0:
            if carts[-1] == target:
                target += 1
                carts.pop()
            elif len(branch)>0:
                if branch[-1] == target:
                    target += 1
                    branch.pop()
                else:
                    branch.append(carts[-1])
                    carts.pop()
            else:
                branch.append(carts[-1])
                carts.pop()
        elif len(branch)>0:
            if branch[-1] == target:
                target += 1
                branch.pop()
            else:
                print("N")
                break
        else:
            print("Y")
            break

