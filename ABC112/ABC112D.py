import math
N, M = map(int, input().strip().split())
st= min(M//N,int(math.sqrt(M)))
cand=0
if M//N <= int(math.sqrt(M)):
    for i in range(M//N,0,-1):
        if M%i==0:
            print(i)
            break
else:
    for i in range(1,int(math.sqrt(M)),1):
        if M%i==0:
            if M//N >= i:
                cand=max(cand,i)
            if M//N >= M//i:
                cand=max(cand,M//i)
    print(cand)
