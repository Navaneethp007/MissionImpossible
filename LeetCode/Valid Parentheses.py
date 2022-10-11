class Solution:
    def isValid(self, s: str) -> bool:
       
        l=[]
        for i in s:
            if len(l)==0 or i=='(' or i=='{' or i=='[':
                l.append(i)
            elif i==')' and l[-1]=='(':
                l.pop()
            elif i=='}' and l[-1]=='{':
                l.pop()
            elif i==']' and l[-1]=='[':
                l.pop()
            else:
                l.append(i)
        if len(l)==0:
            return True
        else:
            return False