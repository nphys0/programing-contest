s=input().strip()
K=int(input().strip())
minst='z'
for i in range(len(s)):
    if s[i]<minst:
        minst=s[i]
stset=[]
for i in range(len(s)):
    for j in range(K):
        if i+j<=len(s)-1:
            stset.append(s[i:i+j+1])
stset.sort()
kst=''
ct=0
for i in range(len(stset)):
    if kst!=stset[i]:
        ct+=1
        kst=stset[i]
    if ct==K:
        break
print(kst)
