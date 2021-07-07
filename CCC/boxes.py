def checkValid(dimens,box):
    if dimens[0]<=box[0]:
        if dimens[1]<=box[1]:
            if dimens[2]<=box[2]:
                return True
    return False

n = int(input())
boxes = []
for i in range(n):
    string = input().split(' ')
    numbers = [int(i) for i in string]
    numbers.sort()
    boxes.append(numbers)
t = int(input())
for i in range(t):
    string = input().split(' ')
    dimens = [int(i) for i in string]
    dimens.sort()
    fit = False
    for box in boxes:
        if checkValid(dimens,box):
            print(box[0]*box[1]*box[2])
            fit = True
            break
    if fit == False:
        print("Item does not fit.")