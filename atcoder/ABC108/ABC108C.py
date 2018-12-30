N, K = map(int, input().split(' '))
a=N//K
if K%2==0:
    b=((N-K//2)//K)+1
    print((a**3) +(b**3))
else:
    print(a**3)
