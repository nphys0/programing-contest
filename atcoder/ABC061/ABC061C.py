N, K = map(int, input().split())
lis=[]
for i in range(N):
    a, b = map(int, input().split())
    lis.append([a,b])

lis.sort()
i=0
while K>0:
    K=K-lis[i][1]
    i+=1


print(lis[i-1][0])
