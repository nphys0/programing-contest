N = int(input())
T, A = map(int, input().split())
h=list(map(int, input().strip().split()))
tlis=[0]*N

for i in range(N):
    tlis[i]=abs(A-(T-0.006*h[i]))

#print(tlis)
print(tlis.index(min(tlis))+1)
