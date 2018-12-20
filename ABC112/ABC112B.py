N, T=map(int,input().strip().split(' '))

ct=[]
for i in range(N):
    ct.append(list(map(int, input().strip().split(' '))))

tle=True
c=100000000

for i in range(N):
    if ct[i][1]<=T:
        tle=False
        c=min(c,ct[i][0])

if tle:
    print('TLE')
else:
    print(c)
