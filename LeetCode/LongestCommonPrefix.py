class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs: return ''
				#since list of string will be sorted and retrieved min max by alphebetic order
        s1 = min(strs)
        s2 = max(strs)

        for i, c in enumerate(s1):
            if c != s2[i]:
                return s1[:i] #stop until hit the split index
        return s1
        
