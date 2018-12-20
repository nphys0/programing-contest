N = int(input())
c=[]
s=[]
f=[]
t=[0]*N
for i in range(N-1):
    ci, si, fi = map(int, input().split())
    c.append(ci)
    s.append(si)
    f.append(fi)

t[N-1]=0
t[N-2]=s[N-2]+c[N-2]
for i in range(N-3,-1,-1):
#    print(N-i-1)
    t[i]=c[i]+s[i]
    for j in range(i,N-2):
        if t[i]<=s[j+1]:
            t[i]=t[i+1]
            break
        else:
            if t[i]%f[j+1]!=0:
                t[i]=t[i]+(f[j+1]-t[i]%f[j+1])+c[j+1]
            else:
                t[i]=t[i]+c[j+1]
for i in range(len(t)):
    print(t[i])
