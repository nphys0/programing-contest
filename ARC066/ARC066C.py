inf=(10**9)+7
N=int(input().strip())
a=list(map(int, input().split()))


a.sort()
fl=True

fl=True
if N%2==0:
    for i in range(0,N,2):
        if a[i]!=i+1 or a[i+1]!=i+1:
            fl=False
            break
else:
    if a[0]!=0:
        fl=False
    for i in range(1,N,2):
        if a[i]!=i+1 or a[i+1]!=i+1:
            fl=False
            break

if fl:
    print((2**(N//2))%inf)
else:
    print(0)
