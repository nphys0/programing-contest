S=input().strip()
K=int(input().strip())
st=1

for i in range(min(K,len(S))):
    if S[i]!='1':
        st=int(S[i])
        break
print(st)
