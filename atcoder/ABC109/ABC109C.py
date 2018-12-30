N, X = map(int, input().split(' '))
xl = list(map(int, input().strip().split()))
for i in range(len(xl)):
    xl[i]=abs(xl[i]-X)
#print(xl)
ans=0
for i in range(len(xl)-1):
    while True:
        if xl[i]==0:
            break
            #ans = x[i]
        a=xl[i]
        xl[i]=xl[i+1]%xl[i]
        xl[i+1]=a
#    print(xl)

print(xl[len(xl)-1])
