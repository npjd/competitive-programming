string = input()
clubsScore = 0
diamondsScore = 0
heartsScore = 0
spadesScore = 0
clubs = string[string.find('C') + 1:string.find('D')]
diamonds = string[string.find('D') + 1:string.find('H')]
hearts = string[string.find('H') + 1:string.find('S')]
spades = string[string.find('S') + 1:]
clubs = list(clubs)
diamonds = list(diamonds)
hearts = list(hearts)
spades = list(spades)

if len(clubs)==0:
    clubsScore+=3
elif len(clubs)==1:
    clubsScore+=2
elif len(clubs)==2:
    clubsScore+=1

if len(diamonds)==0:
    diamondsScore+=3
elif len(diamonds)==1:
    diamondsScore+=2
elif len(diamonds)==2:
    diamondsScore+=1

if len(hearts)==0:
    heartsScore+=3
elif len(hearts)==1:
    heartsScore+=2
elif len(hearts)==2:
    heartsScore+=1

if len(spades)==0:
    spadesScore+=3
elif len(spades)==1:
    spadesScore+=2
elif len(spades)==2:
    spadesScore+=1

for i in range(len(clubs)):
    if clubs[i] == 'A':
        clubsScore += 4
    elif clubs[i] == 'K':
        clubsScore += 3
    elif clubs[i] == 'Q':
        clubsScore += 2
    elif clubs[i] == 'J':
        clubsScore += 1
for i in range(len(diamonds)):
    if diamonds[i] == 'A':
        diamondsScore += 4
    elif diamonds[i] == 'K':
        diamondsScore += 3
    elif diamonds[i] == 'Q':
        diamondsScore += 2
    elif diamonds[i] == 'J':
        diamondsScore += 1
for i in range(len(hearts)):
    if hearts[i] == 'A':
        heartsScore += 4
    elif hearts[i] == 'K':
        heartsScore += 3
    elif hearts[i] == 'Q':
        heartsScore += 2
    elif hearts[i] == 'J':
        heartsScore += 1
for i in range(len(spades)):
    if spades[i] == 'A':
        spadesScore += 4
    elif spades[i] == 'K':
        spadesScore += 3
    elif spades[i] == 'Q':
        spadesScore += 2
    elif spades[i] == 'J':
        spadesScore += 1


print("Cards Dealt              Points")
print("Clubs ", " ".join(clubs), "       ", clubsScore)
print("Diamonds ", " ".join(diamonds), "       ", clubsScore)
print("Hearts ", " ".join(hearts), "       ", clubsScore)
print("Spades ", " ".join(spades), "       ", clubsScore)
print("                       Total "+str(clubsScore+diamondsScore+heartsScore+spadesScore))