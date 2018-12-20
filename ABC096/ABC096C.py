H, W= map(int, input().split())
fi=[[False] * W for i in range(H)]
for i in range(H):
    s=input().strip()
    for j in range(W):
        fi[i][j]=s[j]
fl=True
for i in range(H):
    for j in range(W):
        if fi[i][j]=='#':
            if i-1>=0 and j-1>=0 and i+1<H and j+1<W:
                if fi[i+1][j]=='.' and fi[i][j+1]=='.' and fi[i-1][j]=='.' and fi[i][j-1]=='.':
                    fl=False
            elif i-1<0 and j-1>=0 and i+1<H and j+1<W:
                if fi[i+1][j]=='.' and fi[i][j+1]=='.' and fi[i][j-1]=='.':
                    fl=False
            elif i-1>=0 and j-1<0 and i+1<H and j+1<W:
                if fi[i+1][j]=='.' and fi[i][j+1]=='.' and fi[i-1][j]=='.':
                    fl=False
            elif i-1>=0 and j-1>=0 and i+1>=H and j+1<W:
                if fi[i][j+1]=='.' and fi[i-1][j]=='.' and fi[i][j-1]=='.':
                    fl=False
            elif i-1>=0 and j-1>=0 and i+1<H and j+1>=W:
                if fi[i+1][j]=='.' and fi[i-1][j]=='.' and fi[i][j-1]=='.':
                    fl=False
            elif i-1<0 and j-1<0 and i+1<H and j+1<W:
                if fi[i+1][j]=='.' and fi[i][j+1]=='.':
                    fl=False
            elif i-1<0 and j-1>=0 and i+1>=H and j+1<W:
                if fi[i][j+1]=='.' and fi[i][j-1]=='.':
                    fl=False
            elif i-1<0 and j-1>=0 and i+1<H and j+1>=W:
                if fi[i+1][j]=='.' and fi[i][j-1]=='.':
                    fl=False
            elif i-1>=0 and j-1<0 and i+1>=H and j+1<W:
                if fi[i][j+1]=='.' and fi[i-1][j]=='.':
                    fl=False
            elif i-1>=0 and j-1<0 and i+1<H and j+1>=W:
                if fi[i+1][j]=='.' and fi[i-1][j]=='.':
                    fl=False
            elif i-1>=0 and j-1>=0 and i+1>=H and j+1>=W:
                if  fi[i-1][j]=='.' and fi[i][j-1]=='.':
                    fl=False
            elif i-1>=0 and j-1<0 and i+1>=H and j+1>=W:
                if fi[i-1][j]=='.':
                    fl=False
            elif i-1<0 and j-1>=0 and i+1>=H and j+1>=W:
                if fi[i][j-1]=='.':
                    fl=False
            elif i-1<0 and j-1<0 and i+1<H and j+1>=W:
                if fi[i+1][j]=='.':
                    fl=False
            elif i-1<0 and j-1<0 and i+1>=H and j+1<W:
                if fi[i][j+1]=='.':
                    fl=False
            elif i-1<0 and j-1<0 and i+1>=H and j+1>=W:
                fl=False



if fl:
    print('Yes')
else:
    print('No')
