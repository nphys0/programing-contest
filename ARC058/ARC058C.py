N, K= map(int, input().split())
D=list(map(int, input().strip().split()))



while True:
    fl=True
    for j in range(len(str(N))):
        for i in range(K):
            if str(N)[j]==str(D[i]):
                fl=False
                break
        if fl==False:
            break
    if fl:
        break
    N+=1

print(N)
