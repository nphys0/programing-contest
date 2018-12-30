N=int(input().strip())
S=input().strip()
x=[0]
lc=0
rc=0
for i in range(len(S)):
    if S[i]=='(':
        lc+=1
    elif S[i]==')':
        rc+=1
    x.append(lc-rc)

xn=min(x)
d=lc-rc

ans='('*(-xn)+S+')'*(d-xn)

print(ans)
