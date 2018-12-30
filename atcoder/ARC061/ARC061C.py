S=input().strip()
n=len(S)

def dfs(i):
    global st,S,ans
    if i==n-1:
        st=S
        c=0
        off=0
        for j in lis:
            c+=1
            if j==1:
                S=S[:c+off]+'+'+S[c+off:]
                off+=1
        #print(S)
        tm=S.split('+')
        for j in range(len(tm)):
            #print(tm[j])
            ans+=int(tm[j])

        S=st
        return
    lis.append(0)
    dfs(i+1)
    lis.pop(-1)
    lis.append(1)
    dfs(i+1)
    lis.pop(-1)
lis=[]
ans=0
dfs(0)
print(ans)
