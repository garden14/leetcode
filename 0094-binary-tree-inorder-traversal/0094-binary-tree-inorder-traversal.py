# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def inorderTraversal(self, root):
        answer = []
        def inorder(node) :
            if node != None :
                inorder(node.left)
                answer.append(node.val)
                inorder(node.right)
            elif node == None :
                return []
        inorder(root)
        return answer