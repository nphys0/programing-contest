N = int(input())
F=[]
P=[]
k=[0]*10
for i in range(N):
    F.append(list(map(int, input().strip().split())))
for i in range(N):
    P.append(list(map(int, input().strip().split())))


ans=-10**10
for i in range(1,2**11-1):
    tmp=0
    s='{0:010b}'.format(i)
    for k in range(N):
        c=0
        for j in range(10):
            if (int(s[j])+F[k][j])==2:
                c+=1
        tmp+=P[k][c]
    ans=max(ans,tmp)

print(ans)
