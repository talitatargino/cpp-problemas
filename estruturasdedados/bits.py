n=int(input())
while(n<100):
    if (n&(n-1)==0):
        print('sim')
    n<<=1
    print(n)
   