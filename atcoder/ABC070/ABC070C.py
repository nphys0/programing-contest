a=[]
N = int(input())
for i in range(N):
    a.append(int(input().strip()))


def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

if N!=1:
    for i in range(len(a)-1):
        pr=a[i]*a[i+1]
        lcm=pr//gcd(a[i],a[i+1])
        a[i+1]=lcm
else:
    lcm=a[0]

print(lcm)
