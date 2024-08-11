class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pascal = []
        for i in range(numRows) :
            pascal.append([1])
            if i > 1 :
                for j in range (i-1) :
                    pascal[i].append(pascal[i-1][j+1] + pascal[i-1][j])
            if i > 0 :
                pascal[i].append(1)
        return pascal