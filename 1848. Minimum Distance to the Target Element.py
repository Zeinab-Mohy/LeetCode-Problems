class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        res=-1
        for i,x in enumerate(nums):
            if res!=-1 and x==target:
                res=min(res,abs(i-start))
            elif res==-1 and x==target:
                res=abs(i-start)
        return res
