w = int(input())
n = int(input())
carts = []
for i in range(n):
    cart = int(input())
    carts.append(cart)

cartsCounted = 0
mass = 0

for i in range(n):
    mass+= carts[i]
    if mass > w:
        break
    cartsCounted+=1
    if cartsCounted>=4:
        mass-=carts[i-3]
print(cartsCounted)