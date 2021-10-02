# def getDivisors(n):
#     divisors = []
#     for i in range(1, n + 1):
#         if n % i == 0:
#             if n!=i:
#                 divisors.append(i)
#     return divisors

# def get_digit(number, n):
#     return number // 10**n % 10

# for i in range(1000,10000):
#     divisors = getDivisors(i)
#     if sum(divisors) == i:
#         print(i, end=" ")
# print('\n')

# for i in range(100,1000):
#     a = get_digit(i,2)
#     b = get_digit(i,1)
#     c = get_digit(i,0)
#     if a**3 + b**3 + c**3 == i:
#         print(i, end=" ")

print(8128)
print(153,370,371,407)