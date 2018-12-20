N = int(input())
li=[0]*5
for i in range(N):
    s = input().strip()
    if s[0]=='M':
        li[0]+=1
    if s[0]=='A':
        li[1]+=1
    if s[0]=='R':
        li[2]+=1
    if s[0]=='C':
        li[3]+=1
    if s[0]=='H':
        li[4]+=1
ans=0
for i in range(0,3):
    for j in range(i+1,4):
        for k in range(j+1,5):
            ans+=li[i]*li[j]*li[k]
print(ans)
