X, Y=map(int,input().strip().split(' '))
n=X
ans=0
while n<=Y:
    n*=2
    ans+=1
    #print(n)
print(ans)
