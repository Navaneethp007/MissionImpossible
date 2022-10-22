a=int(input())
b=int(input())
l=[]
#n=len(l)
for i in range(a,b): 
    for j in range(2,i): 
        if(i % j==0): 
            break
    else: 
        l.append(i) 
c=a*b
d=int((a/2)*(b/2))

for i in range(len(l)-1):
    for j in range(i+1,len(l)):
        if (l[i]*l[j])>=d and (l[i]*l[j])<=c:
            print(str(l[i])+','+str(l[j]))