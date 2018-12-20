S=input().strip()
T=input().strip()
fl=True
dicu={}
dicl={}
for i in range(len(S)):
    if S[i] in dicu:
        if dicu[S[i]] != T[i]:
            fl=False
            break
    else:
        dicu[S[i]]=T[i]
    if T[i] in dicl:
        if dicl[T[i]] != S[i]:
            fl=False
            break
    else:
        dicl[T[i]]=S[i]
if fl:
    print('Yes')
else:
    print('No')
