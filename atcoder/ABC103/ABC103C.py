N = int(input())
a=list(map(int, input().strip().split()))
ans=0
for i in range(N):
    ans+=a[i]-1
print(ans)
