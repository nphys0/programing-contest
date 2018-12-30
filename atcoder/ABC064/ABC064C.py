n = int(input())
a = list(map(int, input().strip().split()))
ans=[0]*9
for i in range(n):
    if 1<=a[i] and a[i]<=399:
        ans[0]=1
    elif 400<=a[i] and a[i]<=799:
        ans[1]=1
    elif 800<=a[i] and a[i]<=1199:
        ans[2]=1
    elif 1200<=a[i] and a[i]<=1599:
        ans[3]=1
    elif 1600<=a[i] and a[i]<=1999:
        ans[4]=1
    elif 2000<=a[i] and a[i]<=2399:
        ans[5]=1
    elif 2400<=a[i] and a[i]<=2799:
        ans[6]=1
    elif 2800<=a[i] and a[i]<=3199:
        ans[7]=1
    elif 3200<=a[i]:
        ans[8]+=1

if sum(ans[0:8])==0:
    mi=1
else:
    mi=0

print("{} {}".format(sum(ans[0:8])+mi,sum(ans)))
