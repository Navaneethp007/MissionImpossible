for _ in range(int(input())):
    n = int(input())
    
    # Counting frequency of odd numbers via higher order function - map
    count = sum(map(lambda x :int(x)%2,input().split()))
    
    # Counting frequency of odd numbers using for loop
    # count = 0
    # for i in input().split():
    #     count += int(i)%2
    
    # Q.   Why I am using map instead of normal loop structure?
    # Ans. Because after testing I found out that with for
    #      loop code takes 0.08s while with map and sum 
    #      function it took 0.06s. Speed matters, right!

    # Checking bounds 
    print(0 if count in [0,n] else n - count)