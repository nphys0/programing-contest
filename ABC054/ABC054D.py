N, Ma, Mb=map(int,input().strip().split(' '))
inf=10**8
a=[]
b=[]
c=[]
for i in range(N):
    at,bt,ct=map(int,input().strip().split(' '))
    a.append(at)
    b.append(bt)
    c.append(ct)
suma=sum(a)
sumb=sum(b)
dp=[[[inf]*(sumb+1) for i in range(suma+1)]for j in range(N+1)]
dp[0][0][0]=0
for i in range(N):
    for j in range(suma+1):
        for k in range(sumb+1):
            if a[i]<=j and b[i]<=k:
                dp[i+1][j][k]=min(dp[i][j][k],dp[i][j-a[i]][k-b[i]]+c[i])
            else:
                dp[i+1][j][k]=dp[i][j][k]

m=min(suma//Ma,sumb//Mb)
ans=-1
for i in range(1,m):
    #if dp[N][i*Ma][i*Mb]!=inf and dp[N][i*Ma][i*Mb]!=0:
    if dp[N][i*Ma][i*Mb]!=inf:
        if ans==-1:
            ans=dp[N][i*Ma][i*Mb]
        else:
            ans=min(ans,dp[N][i*Ma][i*Mb])
        #break
print(ans)
