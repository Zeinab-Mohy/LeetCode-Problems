class Solution:
    def countSeniors(self, details: List[str]) -> int:
        ans=0
        for i in details:
            pas=int(i[11]+i[12])
            if(pas>60):
                ans+=1
        return ans
