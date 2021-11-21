from itertools import permutations

# define class for prism object
class Prism:
    def __init__(self, height, width, depth):
        self.height = height
        self.width = width
        self.depth = depth

    def getVolume(self):
        return self.height * self.width * self.depth

n = int(input())
boxes =[]
# make an array for available boxes
for i in range(n):
    # get input
    h, w, d = map(int, input().split())
    boxes.append(Prism(h, w, d))
# sort boxes by volume so when we compare we can use the smallest volume boxes first
boxes.sort(key=lambda x: x.getVolume())

m = int(input())
# make an array for available items
items =[]
for i in range(m):
    h, w, d = map(int, input().split())
    items.append(Prism(h, w, d))

# loop through items
for item in items:
    # loop through boxes
    fitted = False
    for box in boxes:
        # since we can rotate the box, we need to check all permutations. (x,y,z) can be (y,z,x) or (z,x,y) ect. 
        for i in permutations([item.height, item.width, item.depth]):
            # check if the box fits the item
            if i[0] <= box.height and i[1] <= box.width and i[2] <= box.depth:
                print(box.getVolume())
                fitted = True
                break
        # if box fits skip
        if fitted:
            break
    if not fitted:
        print("Item does not fit.")
        