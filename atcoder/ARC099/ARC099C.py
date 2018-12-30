N,K=map(int,input().strip().split(' '))
a=list(map(int, input().split()))


#for i in range(N):
#    if a[i]==1:
#        mi=i
#r=N-mi
#l=mi+1
#if K==N:
#    ans=1
#else:
ans=-(-(N-1)//(K-1))
print(ans)
