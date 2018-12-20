N=int(input().strip())

for i in range(N,1000,1):
    a=str(i)
    if a[0]==a[1] and a[1]==a[2]:
        print(int(a))
        break
