from collections import Counter

for _ in range(int(input())):
    n=int(input())
    arr = [int(x) for x in input().split()]
    n = len(arr) 
    data = Counter(arr) 
    get_mode = dict(data) 
    mode = [k for k, v in get_mode.items() if v == max(list(data.values()))] 
    l=list(data.values())
    n1 = len(l) 
    data1 = Counter(l) 
    get_mode = dict(data1) 
    mode1 = [k for k, v in get_mode.items() if v == max(list(data1.values()))] 
    l1=list(data1.values())
    print(min(mode1))