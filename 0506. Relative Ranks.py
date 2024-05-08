import numpy as np
class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        new_score=np.array(score)
        new_score.sort()
        dic_score={}
        counter=len(new_score)
        for i in new_score:
            if(counter==1):
                dic_score[i]="Gold Medal"
            elif(counter==2):
                dic_score[i]="Silver Medal"
            elif(counter==3):
                dic_score[i]="Bronze Medal"
            else:
                dic_score[i]=str(counter)
            counter-=1

        ans=[]
        for i in score:
            ans.append(dic_score[i])
        return ans
        
