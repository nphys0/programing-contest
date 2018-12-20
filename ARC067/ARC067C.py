N=int(input().strip())
flis=[0]*1001
inf=(10**9)+7
def fact(n):
    global flis
    for i in range(2,n+1):
        while n%i==0:
            n=n//i
            flis[i]+=1


def solve(n):
    ans=1
    for i in range(1,n+1):
        fact(i)
    for i in range(1,n+1):
        ans*=(flis[i]+1)
    return ans

print(solve(N)%inf)
