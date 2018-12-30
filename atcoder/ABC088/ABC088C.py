a=[0]*3
b=[0]*3
c=[]
for i in range(3):
    c.append(list(map(int, input().strip().split())))

a[0]=0
b[0]=c[0][0]
b[1]=c[0][1]
b[2]=c[0][2]
a[1]=c[1][0]-b[0]
a[2]=c[2][0]-b[0]

fl=True
for i in range(3):
    for j in range(3):
        if c[i][j]!=a[i]+b[j]:
            fl=False
if fl:
    print('Yes')
else:
    print('No')
