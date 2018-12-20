import heapq
n=int(input().strip())
nu=list(map(int, input().strip().split()))
nu1=[]
nu2=[]
nu1memo=[0]*100001
nu2memo=[0]*100001
for i in range(0,n//2):
    nu1.append(nu[2*i])
    nu2.append(nu[2*i+1])
    nu1memo[nu[2*i]]+=1
    nu2memo[nu[2*i+1]]+=1

#mi1=max(zip(nu1memo, range(len(nu1memo))))[1]
mi1=heapq.nlargest(2, range(len(nu1memo)), key=nu1memo.__getitem__)
#mi2=max(zip(nu2memo, range(len(nu2memo))))[1]
mi2=heapq.nlargest(2, range(len(nu2memo)), key=nu2memo.__getitem__)
ans=0
if mi1[0]!=mi2[0]:
    ans=n-nu1memo[mi1[0]]-nu2memo[mi2[0]]
elif mi1[0]==mi2[0]:
    ans=min(n-nu1memo[mi1[0]]-nu2memo[mi2[1]],n-nu1memo[mi1[1]]-nu2memo[mi2[0]])

print(ans)
