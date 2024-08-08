# Definition for a binary tree node.

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        temp = []
        def inorder(node) :
            if node == None : return
            inorder(node.left)
            temp.append(node.val)
            inorder(node.right)
        inorder(root)
        def result(array) :
            if array :
                return TreeNode(array[0], right=result(array[1:]))
        return result(temp)


        