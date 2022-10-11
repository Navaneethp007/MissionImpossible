for _ in range(int(input())):
    n=int(input())
    l=[int(x) for x in input().split()]
    if 0 in l:
        print(len(set(l))-1)
    else:
        print(len(set(l)))
    