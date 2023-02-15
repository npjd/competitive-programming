fib= [1,2,3,5,8,13, 
21, 55, 89, 144,233,377,610
]

for x in range(1,11):
    stop = 0 
    for y in range(0,13):
        if stop ==0 and fib[y] %x ==0:
            print(x)
            stop =1

