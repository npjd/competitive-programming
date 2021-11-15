string = input()
clubString = string[1:string.find('D')]
diamondString = string[string.find('D')+1:string.find('H')]
heartString = string[string.find('H')+1:string.find('S')]
spadeString = string[string.find('S')+1:]
clubs = []
diamonds = []
hearts = []
spades = []

for i in range(len(clubString)):
    if clubString[i].isnumeric():
        clubs.append(0)
    elif clubString[i] == 'T':
        clubs.append(0)
    elif clubString[i] == 'J':
        clubs.append(1)
    elif clubString[i] == 'Q':
        clubs.append(2)
    elif clubString[i] == 'K':
        clubs.append(3)
    elif clubString[i] == 'A':
        clubs.append(4)

for i in range(len(diamondString)):
    if diamondString[i].isnumeric():
        diamonds.append(0)
    elif diamondString[i] == 'T':
        diamonds.append(0)
    elif diamondString[i] == 'J':
        diamonds.append(1)
    elif diamondString[i] == 'Q':
        diamonds.append(2)
    elif diamondString[i] == 'K':
        diamonds.append(3)
    elif diamondString[i] == 'A':
        diamonds.append(4)

for i in range(len(heartString)):
    if heartString[i].isnumeric():
        hearts.append(0)
    elif heartString[i] == 'T':
        hearts.append(0)
    elif heartString[i] == 'J':
        hearts.append(1)
    elif heartString[i] == 'Q':
        hearts.append(2)
    elif heartString[i] == 'K':
        hearts.append(3)
    elif heartString[i] == 'A':
        hearts.append(4)

for i in range(len(spadeString)):
    if spadeString[i].isnumeric():
        spades.append(0)
    elif spadeString[i] == 'T':
        spades.append(0)
    elif spadeString[i] == 'J':
        spades.append(1)
    elif spadeString[i] == 'Q':
        spades.append(2)
    elif spadeString[i] == 'K':
        spades.append(3)
    elif spadeString[i] == 'A':
        spades.append(4)

clubSum = sum(clubs)
if len(clubs) == 0:
    clubSum +=3
elif len(clubs) == 1:
    clubSum +=2
elif len(clubs) == 2:
    clubSum +=1

diamondsSum = sum(diamonds)
if len(diamonds) == 0:
    diamondsSum +=3
elif len(diamonds) == 1:
    diamondsSum +=2
elif len(diamonds) == 2:
    diamondsSum +=1

heartsSum = sum(hearts)
if len(hearts) == 0:
    heartsSum +=3
elif len(hearts) == 1:
    heartsSum +=2
elif len(hearts) == 2:
    heartsSum +=1

spadesSum = sum(spades)
if len(spades) == 0:
    spadesSum +=3
elif len(spades) == 1:
    spadesSum +=2
elif len(spades) == 2:
    spadesSum +=1
    
