class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        pascal = [1]
        for i in range(1, rowIndex + 1) : 
            pascal.append(int(pascal[i-1]*(rowIndex-i+1)/i))
        return pascal
        