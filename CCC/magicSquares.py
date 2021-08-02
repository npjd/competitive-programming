line1 = [int(n) for n in input().split(" ")]
line2 = [int(n) for n in input().split(" ")]
line3 = [int(n) for n in input().split(" ")]
line4 = [int(n) for n in input().split(" ")]

if sum(line1) == sum(line2) == sum(line3) == sum(line4):
    if line1[0] + line2[0] + line3[0] + line4[0] == sum(line1):
        if line1[1] + line2[1] + line3[1] + line4[1] == sum(line1):
            if line1[2] + line2[2] + line3[2] + line4[2] == sum(line1):
                if line1[3] + line2[3] + line3[3] + line4[3] == sum(line1):
                    print("magic")
                else:
                    print("not magic")
            else:
                print("not magic")
        else:
            print("not magic")
    else:
        print("not magic")
else:
    print("not magic")

