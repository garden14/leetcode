class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        return [center for center in edges[0] if center in edges[1]][0]