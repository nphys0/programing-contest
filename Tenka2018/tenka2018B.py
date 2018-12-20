A,B,K=map(int, input().strip().split())

for i in range(K):
    if i%2==0:
        if A%2==1:
            A-=1
        B=B+A//2
        A=A//2

    if i%2==1:
        if B%2==1:
            B-=1
        A=A+B//2
        B=B//2


#    print(A,B)

print("{} {}".format(A, B))
