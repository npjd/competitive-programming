from itertools import permutations
class Prism:
    def __init__(self, height, width, depth):
        self.height = height
        self.width = width
        self.depth = depth

    def getVolume(self):
        return self.height * self.width * self.depth

n = int(input())
boxes =[]
for i in range(n):
    h, w, d = map(int, input().split())
    boxes.append(Prism(h, w, d))

boxes.sort(key=lambda x: x.getVolume())

m = int(input())
items =[]
for i in range(m):
    h, w, d = map(int, input().split())
    items.append(Prism(h, w, d))

for item in items:
    fitted = False
    for box in boxes:
        for i in permutations([item.height, item.width, item.depth]):
            if i[0] <= box.height and i[1] <= box.width and i[2] <= box.depth:
                print(box.getVolume())
                fitted = True
                break
        if fitted:
            break
    if not fitted:
        print("Item does not fit.")
        