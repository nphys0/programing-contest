H, W=map(int,input().strip().split(' '))

cost=[]
for i in range(10):
    cost.append(list(map(int,input().strip().split(' '))))

for k in range(10):
    for i in range(10):
        for j in range(10):
            cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j])
ans=0
for i in range(H):
    a=list(map(int,input().strip().split(' ')))
    for j in a:
        if j!=-1:
            ans+=cost[j][1]
print(ans)
