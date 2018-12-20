N=int(input().strip())
a=list(map(int, input().split()))
nlis={}

for i in range(N):
    if (a[i] in nlis)==False:
        nlis[a[i]]=1
    else:
        nlis[a[i]]+=1
ans=0
for i in nlis:
    if nlis[i]<i:
        ans+=nlis[i]
    else:
        ans+=abs(nlis[i]-i)
    #print(ans)
print(ans)
