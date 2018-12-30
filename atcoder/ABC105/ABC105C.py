N=int(input().strip())
i=0
S=""
if N==0:
    print(0)
else:
    while N!=0:
        if N%(2**(i+1))==0:
            sp="0"
        else:
            sp="1"
        S=sp+S
        N=N-(int(sp)*((-2)**i))
    #    print(N)
        i=i+1
#        print(sp)
    print(int(S))
