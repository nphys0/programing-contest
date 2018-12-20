V, E=map(int,input().strip().split(' '))
edge=[]
for i in range(E):
    at,bt,ct=map(int,input().strip().split(' '))
    edge.append([at,bt,ct])

#edge=[[0,1,2],[0,2,5],[1,2,4],[1,3,6],[2,3,2],[1,4,10],[3,5,1],[4,5,3],[4,6,5],[5,6,9],[1,0,2],[2,0,5],[2,1,4],[3,1,6],[3,2,2],[4,1,10],[5,3,1],[5,4,3],[6,4,5],[6,5,9]]
#V=7
#E=10*2
inf=-3*10**15

def shortest_path(s):
    d=[inf]*V
    d[s]=0
    for _ in range(V+1):
        update=False
        for i in range(E):
            if d[edge[i][0]-1]!=inf and d[edge[i][1]-1]<d[edge[i][0]-1]+edge[i][2]:
                d[edge[i][1]-1]=d[edge[i][0]-1]+edge[i][2]
                update=True
        if update==False:
            break
        if _ == V-1:
            tm=d[V-1]
        if _ == V and d[V-1]!=tm:
            return False
    return d

d=shortest_path(0)
if d==False:
    print('inf')
else:
    print(d[V-1])
