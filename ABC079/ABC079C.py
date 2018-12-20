N = input()
a=int(N[0])
b=int(N[1])
c=int(N[2])
d=int(N[3])
if a+b+c+d==7:
    print(str(a)+'+'+str(b)+'+'+str(c)+'+'+str(d)+'=7')
elif a-b+c+d==7:
    print(str(a)+'-'+str(b)+'+'+str(c)+'+'+str(d)+'=7')
elif a+b-c+d==7:
    print(str(a)+'+'+str(b)+'-'+str(c)+'+'+str(d)+'=7')
elif a+b+c-d==7:
    print(str(a)+'+'+str(b)+'+'+str(c)+'-'+str(d)+'=7')
elif a-b-c+d==7:
    print(str(a)+'-'+str(b)+'-'+str(c)+'+'+str(d)+'=7')
elif a-b+c-d==7:
    print(str(a)+'-'+str(b)+'+'+str(c)+'-'+str(d)+'=7')
elif a+b-c-d==7:
    print(str(a)+'+'+str(b)+'-'+str(c)+'-'+str(d)+'=7')
elif a-b-c-d==7:
    print(str(a)+'-'+str(b)+'-'+str(c)+'-'+str(d)+'=7')
