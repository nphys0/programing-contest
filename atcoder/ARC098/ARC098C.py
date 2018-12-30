N=int(input().strip())
S=input().strip()
inf=10**8
ecr=0
for i in range(N):
    if S[i]=='E':
        ecr+=1
ans=inf
wcl=0
for i in range(len(S)):
    if i==0:
        if S[i]=='E':
            ecr-=1
        spre=S[i]
        ans=min(ans,ecr+wcl)
    else:
        if S[i]=='E':
            ecr-=1
        if spre=='W':
            wcl+=1
        spre=S[i]
        ans=min(ans,ecr+wcl)
print(ans)
