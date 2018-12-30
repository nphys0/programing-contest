s=input().strip()
N=len(s)
po=0
for i in range(N):
    if s[i]=='p':
        po+=1

print(N//2 -po)
