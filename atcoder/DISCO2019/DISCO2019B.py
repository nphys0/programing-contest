import sys
input = sys.stdin.readline

N=int(input().strip())
if N%2==0:
    print(N*((N//2)-1))
else:
    print((((N-1)**2)+((N-3)**2))//4 )
