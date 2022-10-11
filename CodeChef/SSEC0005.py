for _ in range(int(input())):
    n=int(input())
    l=[int(x) for x in str(n)]
    for i in range(len(l)):
        l[i]=l[i]-2
    li = ''.join([str(elem) for elem in l]) 
    print(li)