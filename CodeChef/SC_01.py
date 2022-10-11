from collections import defaultdict 

n=int(input())
a = [int(x) for x in input().split()] 
Sum = 0

prevSum = defaultdict(lambda : 0) 

res = 0

currsum = 0

for i in range(0, n): 

	 
	currsum += a[i] 

	if currsum == Sum: 
		res += 1		

	if (currsum - Sum) in prevSum: 
		res += prevSum[currsum - Sum] 

	prevSum[currsum] += 1	
print(res)