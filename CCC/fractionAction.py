from math import gcd

def reduceFraction(x, y):
    d = gcd(x, y)
 
    x = x // d
    y = y // d
    return x, y

n1 = int(input())
n2 = int(input())

intAnswer = n1//n2

n1 -= intAnswer*n2

n1,n2 = reduceFraction(n1,n2)

if n1 == 0:
    print(intAnswer)
elif n2 == 1:
    print(n1)
else:
    if intAnswer != 0:
        print(intAnswer, str(int(n1))+'/'+ str(int(n2)))
    else:
        print(str(int(n1))+'/'+ str(int(n2)))
