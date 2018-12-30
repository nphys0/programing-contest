N=int(input().strip())
a=list(map(int, input().strip().split(' ')))
for i in range(N):
    a[i]=a[i]-i
a.sort()
m=a[(N-1)//2]
ans=0
for i in range(N):
    ans+=abs(a[i]-m)
print(ans)
