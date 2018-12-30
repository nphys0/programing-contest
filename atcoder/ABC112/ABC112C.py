N=int(input().strip())
xyh=[]
for i in range(N):
    xi,yi,hi = map(int, input().split(' '))
    xyh.append([xi,yi,hi])
    if hi>=1:
        xyhset=[xi,yi,hi]

for nx in range(101):
    for ny in range(101):
        He = xyhset[2]+abs(xyhset[0]-nx)+abs(xyhset[1]-ny)
        He=max(0,He)
        flag=True
        for i in range(N):
            h=He-abs(xyh[i][0]-nx)-abs(xyh[i][1]-ny)
            h=max(0,h)
            if xyh[i][2]!=h:
                flag=False
        if flag:
            ax=nx
            ay=ny
            ah=He

print("{} {} {}".format(ax,ay,ah))
