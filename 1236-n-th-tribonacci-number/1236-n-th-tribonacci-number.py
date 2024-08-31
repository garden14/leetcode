class Solution:
    def tribonacci(self, n: int) -> int:
        if n < 3 :
            if n == 0 : return 0
            else : return 1
        
        f, s, t = 0, 1, 1

        for i in range(2,n):
            f, s, t = s, t, f + s + t
        
        return t
    
        

        