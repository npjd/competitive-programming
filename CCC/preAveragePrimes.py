t = int(input())
found = False

def is_valid(num):
    for i in range(2, int(num/2)+1):
 
        # If num is divisible by any number between
        # 2 and n / 2, it is not prime
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