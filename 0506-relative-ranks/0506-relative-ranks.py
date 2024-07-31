import heapq

class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        dic = {}
        answer = []
        sort_score = sorted(score, reverse=True)

        for i in range (len(sort_score)) : 
            if i==0:
                dic[sort_score[i]]="Gold Medal"
            elif i==1:
                dic[sort_score[i]]="Silver Medal"
            elif i==2:
                dic[sort_score[i]]="Bronze Medal"
            else:
                dic[sort_score[i]]=str(i+1)            

        for i in range(len(score)) : 
            answer.append(dic[score[i]])

        return answer
        
        


        