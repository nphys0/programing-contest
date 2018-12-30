def dfs(v):
    visited[v]=True
    for v2 in range(n):
        if graph[v][v2]==False:
            continue
        if visited[v2]==True:
            continue
        dfs(v2)

n, m = map(int, input().split())

alis=[]
blis=[]
graph=[[False] * n for i in range(n)]

#隣接行列のセット
for i in range(m):
    a, b = map(int, input().split())
    graph[a-1][b-1]=True
    graph[b-1][a-1]=True
    alis.append(a-1)
    blis.append(b-1)

ans=0

for i in range(m):
    #1本辺を落とす
    graph[alis[i]][blis[i]]=False
    graph[blis[i]][alis[i]]=False
    visited=[False]*n
    dfs(0)
    bridge=False
    for j in range(n):
        if visited[j]==False:
            bridge=True
    if bridge:
        ans+=1
    graph[alis[i]][blis[i]]=True
    graph[blis[i]][alis[i]]=True

print(ans)
