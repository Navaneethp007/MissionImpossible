# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    a=[]
    def f(self,root,depth):
        
            if root is None:
                return

            else:
                if depth>=len(self.a):
                    tmp=[root.val]
                    self.a.append(tmp)
                else:
                    self.a[depth].append(root.val)
                self.f(root.left,depth+1)
                self.f(root.right,depth+1)
                
    
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        
        
        
        
        
        self.a=[]
        self.f(root,0)
        
        return self.a