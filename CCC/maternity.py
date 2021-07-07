
dad = input()
mom = input()
x = int(input())
for i in range(x):
    fruitFly = input()
    okay = True
    for i in range(len(fruitFly)):
        char = fruitFly[i]
        if 'E'>=char>='A':
            if dad.find(char) != -1:
                continue
            elif mom.find(char) != -1:
                continue
            else:
                print("Not their baby!")
                okay = False
                break
        else:
            if dad.find(char) != -1 and mom.find(char) != -1:
                continue
            else:
                print("Not their baby!")
                okay = False
                break
    if okay:
        print("Possible baby.")