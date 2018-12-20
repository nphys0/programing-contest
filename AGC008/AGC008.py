x, y=map(int,input().strip().split(' '))
ans=3*10**9
for i in range(2):
    for j in range(2):
        if x*(-1)**i <= y*(-1)**j:
            ans=min(ans,(y*(-1)**j)-(x*(-1)**i)+i+j)
print(ans)
