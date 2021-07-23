n = int(input())

firstName = ""
firstVal = 0
secondName = ""
secondVal = 0

for i in range(n):
    daInput = input().split(" ")
    name = daInput[0]
    R = int(daInput[1])
    S = int(daInput[2])
    D = int(daInput[3])

    formula = 2*R + 3*S + D
    if formula > firstVal:
        secondVal = firstVal
        secondName = firstName
        firstVal = formula
        firstName = name
    elif formula > secondVal:
        secondVal = formula
        secondName = name
if firstVal == secondVal:
    pair = (firstName, secondName)
    pair = sorted(pair)
    print(pair[0])
    print(pair[1])
else:
    print(firstName)
    print(secondName)

