import sys
#limit=sys.getrecursionlimit()
sys.setrecursionlimit(10000000)
#sys.setrecursionlimit(1000000000)

V=int(input().strip())
E=V-1
inf=3*10**15
G=[]
dist=[inf]*V

for i in range(V):
    G.append([])
for i in range(E):
    at,bt,ct=map(int,input().strip().split(' '))
    G[at-1].append([ct,bt-1])
    G[bt-1].append([ct,at-1])

visited=[False]*V
def dfs(v,p,d):
    #global d
    dist[v]=d
    for q in G[v]:
        if q[1]==p:
            continue
        dfs(q[1],v,d+q[0])

Q, K=map(int,input().strip().split(' '))
K-=1 #0-indexedに直す

dfs(K,-1,0)

x=[]
y=[]

for i in range(Q):
    xt, yt=map(int,input().strip().split(' '))
    x.append(xt-1)#0-indexedに直して入れる
    y.append(yt-1)#0-indexedに直して入れる
for i in range(Q):
    print(dist[x[i]]+dist[y[i]])
