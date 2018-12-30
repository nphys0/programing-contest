import sys
input = sys.stdin.readline

#dojkstra
import itertools
import queue
G=[]
#infの値に注意
inf=3*10**15
V, E, R=map(int,input().strip().split(' '))
rlis=list(map(int,input().strip().split(' ')))

cost=[[inf]*V for i in range(V)]
for i in range(E):
    fr, to, co=map(int,input().strip().split(' '))
    cost[fr-1][to-1]=co
    cost[to-1][fr-1]=co
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

dist=[None] * V
for i in rlis:
    dist[i-1]=dijkstra(i-1)

ans=inf
for rperm in itertools.permutations(rlis):
    a_tmp=0
    for j in range(R-1):
        a_tmp+=dist[rperm[j]-1][rperm[j+1]-1]
    ans=min(ans,a_tmp)

print(ans)
