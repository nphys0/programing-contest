d={}
N = int(input())

for i in range(N):
    b=int(input().strip())
    if b in d:
        d.pop(b)
    else:
        d[b]=-1
print(len(d))
