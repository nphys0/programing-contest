N, Y= map(int, input().split())
s=-1
g=-1
ic=-1

fl=False
for i in range(N+1):
    for j in range(N+1-i):
        k=N-i-j
#        print(i,j,k)
        if (1000*i+5000*j+10000*k)==Y:
            fl=True
            s=i
            g=j
            ic=k
            break
        if fl:
            break
    if fl:
        break
print(ic,g,s)
