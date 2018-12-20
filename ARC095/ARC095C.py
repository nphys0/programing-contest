A,B,C,X,Y=map(int,input().strip().split(' '))
m=min(X,Y)
print(min(2*C*max(X,Y),2*C*m+A*(X-m)+B*(Y-m),A*X+B*Y))
#print(C*max(X,Y),C*m+A*(X-m)+B*(Y-m),A*X+B*Y)
