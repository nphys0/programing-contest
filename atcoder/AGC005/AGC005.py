X=input().strip()
N=len(X)
sl=0
tl=0
sp=0
for i in range(N-1,-1,-1):
    if X[i]=='S':
        if tl==0:
            sl+=1
        else:
            tl-=1
    else:
        tl+=1
print(sl+tl)
