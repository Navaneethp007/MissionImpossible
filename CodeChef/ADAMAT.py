t=int(input())
while(t>0):
    t-=1
    aa=int(input())
    c=0
    don=0
    l=[]
    for i in range(aa):
        l.append([int(x) for x in input().split()])
    for d in range(aa-1,0,-1):
        done=l[d][d-1]+1
        if done!=l[d][d]:
            c+=1
            don=d+1
            for i in range(don):
                for j in range(i,don):
                    trav=l[i][j]
                    l[i][j]=l[j][i]
                    l[j][i]=trav
                
    print(c)