n = int(input())
line1 = input().split(" ")
line2 = input().split(" ")
good = True
dict = {}
for i in range(n):
    first_person = line1[i]
    second_person = line2[i]
    if first_person == second_person:
        good = False
        break
    elif first_person in dict:
        if dict[first_person] != second_person:
            good = False
            break
    dict[first_person] = second_person
    dict[second_person] = first_person

if good:
    print("good")
else:
    print("bad")