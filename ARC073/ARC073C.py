N, T = map(int, input().split())
a=list(map(int, input().split()))
ans=0
for i in range(N-1):
    ans+=min(T,a[i+1]-a[i])
ans+=T

print(ans)
