N, K = map(int, input().split(' '))
x = list(map(int, input().strip().split()))
ans=1000000000

for i in range(N-K+1):
    xl=x[i]
    xr=x[i+K-1]
    ans=min(ans,min(abs(xr)+abs(xr-xl),abs(xl)+abs(xl-xr)))


print(ans)
