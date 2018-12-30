N=input().strip()
a=''

for i in range(3):
    if N[i]=='1':
        a=a+'9'
    elif N[i]=='9':
        a=a+'1'

print(int(a))
