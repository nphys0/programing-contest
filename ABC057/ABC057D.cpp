import math
#c = n! / (r! * (n - r)!)
def com(n,r):
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))


N, A, B=map(int,input().strip().split(' '))
v=list(map(int, input().strip().split(' ')))

v.sort(reverse=True)

anum=0
onum=0
for i in range(N):
    if v[i]==v[A-1]:
        anum+=1
    elif v[i]>v[A-1]:
        onum+=1
    if v[i]<v[A-1]:
        break
ans=0
if v[0]==v[A-1]:
    for i in range(A,min(B,anum)+1):
        ans+=com(anum,i)
#    print('aaa')
else:
    ans+=com(anum,A-onum)

print(sum(v[:A])/A)
print(ans)
