N=int(input().strip())
a=1
b=1
for i in range(N):
    x, y= map(int, input().split())
    m=max(-(-a//x),-(-b//y))
    a=m*x
    b=m*y
print(a+b)
