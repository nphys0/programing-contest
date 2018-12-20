def dijkstra(s):
    d=[inf]*V
    used=[False]*V
    d[s]=0
    while True:
        v=-1
        for u in range(V):
            if used[u]==False and(v==-1 or d[u]<d[v]):
                v=u
        if v==-1:
            break
        used[v]=True
        for u in range(V):
            d[u]=min(d[u],d[v]+cost[v][u])
    return d



V, E=map(int,input().strip().split(' '))
inf=10**9
cost=[[inf]*V for i in range(V)]
edge=[]
for i in range(E):
    fr, to, co=map(int,input().strip().split(' '))
    cost[fr-1][to-1]=co
    cost[to-1][fr-1]=co
    edge.append([fr-1,to-1])

d=[]
for i in range(V):
    d.append(dijkstra(i))

cand=E
for i in range(E):
    fl=False
    for s in range(V):
        if d[s][edge[i][0]]+cost[edge[i][0]][edge[i][1]]==d[s][edge[i][1]]:
            cand-=1
            fl=True
            break

print(cand)
