import sys
import math

input = sys.stdin.readline

N=int(input().strip())
inf=1000000007

ans=0
for i in range(1,N+1):
    ans+=(i**10-(i-1)**10)*(math.floor(N/i)**10)
print(ans%inf)
