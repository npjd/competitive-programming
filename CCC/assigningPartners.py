n = int(input())
line1 = input().split(" ")
line2 = input().split(" ")
good = True
partners = {}

for i in range(n):
    first_person = line1[i]
    second_person = line2[i]
    if first_person == second_person:
        good = False
        break
    if first_person in partners and partners[first_person]!= second_person:
        good = False
        break
    partners[first_person] = second_person
    partners[second_person] = first_person

if good:
    print('good')
else:
    print('bad')
