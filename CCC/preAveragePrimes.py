import math

t = int(input())
found = False

def is_valid(num):
    if num % 2==0:
        return False
    end =math.floor(math.sqrt(num))
    for i in range(2, end+1):
        if (num % i) == 0:
            return False
    return True

for i in range(t):
    n = int(input())
    left = n
    right =n
    while found==False:
        right+=1
        left-=1
        if is_valid(right) and is_valid(left):
            print(left,right)
            found = True
    found = False