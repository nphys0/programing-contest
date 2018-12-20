import bisect
N=int(input().strip())
a=list(map(int, input().split()))
b=list(map(int, input().split()))
c=list(map(int, input().split()))
a.sort()
#b.sort(reverse=True)
c.sort()
ans=0
#for i in range(len(b)):
#    la=bisect.bisect_left(a, b[i])
#    ra=bisect.bisect_right(c, b[i])
#    ans+=la*(len(c)-ra)
#    print(la,(len(c)-ra))


for i in range(len(b)):
    la=bisect.bisect_left(a, b[i])
    ra=bisect.bisect_right(c, b[i])
    #print(la*(len(c)-ra))
    ans+=la*(len(c)-ra)
#print(ans)
#la=bisect.bisect_left(a, 8)
#ra=bisect.bisect_right(a, 8)
#print(la,len(a)-ra)

print(ans)
