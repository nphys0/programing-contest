import math
n = int(input())
for i in range(int(math.sqrt(n)),0,-1):
    if n%i==0:
        a=n//i
#        print(i)
        print(max(len(str(i)),len(str(a))))
        break
