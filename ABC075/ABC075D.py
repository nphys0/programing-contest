import sys
input = sys.stdin.readline

N, K=map(int,input().strip().split(' '))
x=[]
y=[]
point=[]
for i in range(N):
    xt,yt=map(int,input().strip().split(' '))
    x.append(xt)
    y.append(yt)
    point.append([xt,yt])
ans=10**20
x.sort()
y.sort()
point.sort(key=lambda x:x[1])


for i in range(N):
    for j in range(i+1,N):
        xmin=x[i]
        xmax=x[j]
        for k in range(N):
            ymin=y[k]
#            ymax=y[l]
#
            ct=0
            for p in point:
                if xmin<=p[0] and p[0]<=xmax and ymin<=p[1]:
                    ct+=1
                if ct==K:
                    A=(xmax-xmin)*(p[1]-ymin)
                    ans=min(ans,A)
                    break
print(ans)
