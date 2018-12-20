S=input().strip()
N=len(S)
snum=1
ns=S[0]
def solve(S):
    global ns,snum
    for i in range(N):
        #print(ns)
        if ns!=S[i]:
            snum+=1
            ns=S[i]
    #if snum==1 and S[0]=='B':
    #    snum=3
    #    return snum
    return snum

print(solve(S)-1)
