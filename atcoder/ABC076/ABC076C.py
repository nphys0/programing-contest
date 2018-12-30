sd = input()
T = input()

if len(sd)<len(T):
    fl=False
else:
    for i in range(len(sd)-len(T),-1,-1):
    #    print(i)
        st=sd[i:len(T)+i]
    #    print(sd[i:len(T)+i])
        fl=True
        for j in range(len(T)):
            if st[j]!='?':
                if st[j]!=T[j]:
                    fl=False
        if fl:
            s=sd[:i]+T+sd[len(T)+i:]
            for k in range(len(s)):
                if s[k]=='?':
                    s=s[:k]+'a'+s[k+1:]
            break
if fl:
    print(s)
else:
    print('UNRESTORABLE')
