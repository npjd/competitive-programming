n = int(input())


for i in range(n):
    ogString = input()
    newChars =[]
    digitCouter = 0
    for char in ogString:
        if digitCouter ==10:
            break
        if char.isalpha():
            if char.isupper():
                digitCouter += 1
                if char == 'A': 
                    newChars.append("2")
                elif char == 'B':
                    newChars.append("2")
                elif char == 'C':
                    newChars.append("2")
                elif char == 'D':
                    newChars.append("3")
                elif char == 'E':
                    newChars.append("3")
                elif char == 'F':
                    newChars.append("3")
                elif char == 'G':
                    newChars.append("4")
                elif char == 'H':
                    newChars.append("4")
                elif char == 'I':
                    newChars.append("4")
                elif char == 'J':
                    newChars.append("5")
                elif char == 'K':
                    newChars.append("5")
                elif char == 'L':
                    newChars.append("5")
                elif char == 'M':
                    newChars.append("6")
                elif char == 'N':
                    newChars.append("6")
                elif char == 'O':
                    newChars.append("6")
                elif char == 'P':
                    newChars.append("7")
                elif char == 'Q':
                    newChars.append("7")
                elif char == 'R':
                    newChars.append("7")
                elif char == 'S':
                    newChars.append("7")
                elif char == 'T':
                    newChars.append("8")
                elif char == 'U':
                    newChars.append("8")
                elif char == 'V':
                    newChars.append("8")
                elif char == 'W':
                    newChars.append("9")
                elif char == 'X':
                    newChars.append("9")
                elif char == 'Y':
                    newChars.append("9")
                elif char == 'Z':
                    newChars.append("9")
        else:
            if char == '-':
                continue
            else:
                digitCouter += 1
                newChars.append(char)
    for i in range(len(newChars)):
        print(newChars[i], end="")
        if i ==2:
            print("-", end="")    
        elif i ==5:
            print("-", end="")
    print('\n')
