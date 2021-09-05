def isMonkey(word):
    while 'ANA' or 'BAS' in word:
        word = word.replace('ANA', 'A')
        word = word.replace('BAS', 'A')
        if word =="A":
            return True
        else:
            return False


while True:
    word = input()
    if word == 'X': 
        break
    if isMonkey(word):
        print('YES')
    else:
        print('NO')
    
