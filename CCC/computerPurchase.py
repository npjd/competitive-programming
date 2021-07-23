n = int(input())

d= {}

for i in range(n):
    daInput = input().split(" ")
    name = daInput[0]
    R = int(daInput[1])
    S = int(daInput[2])
    D = int(daInput[3])

    formula = 2*R + 3*S + D
    d[name] = formula


highest = max(d, key=d.get)
print(highest)
d.pop(highest)
highest = max(d, key=d.get)
print(highest)

