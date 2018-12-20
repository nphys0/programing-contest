x=int(input().strip())
ans=0
ans+=(x//11)*2
x=x%11
if x>6:
    ans+=2
elif x==0:
    pass
else:
    ans+=1

print(ans)
