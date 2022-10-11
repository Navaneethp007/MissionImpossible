class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        
            
        
        
        
        stack = [i for i in range(n)]
        start = 0
        while len(stack)>1:
            popped = (start+k-1)%len(stack)
            stack.pop(popped)
            start=popped
        
        return stack[0]+1