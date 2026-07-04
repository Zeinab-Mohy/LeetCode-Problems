class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        leftSum=[0]*len(nums)
        rightSum=[0]*len(nums)
        ans=[]

        i=1
        while i<len(nums):
            leftSum[i]=leftSum[i-1]+nums[i-1]
            i+=1
        nums.reverse()
        i=1
        while i<len(nums):
            rightSum[i]=rightSum[i-1]+nums[i-1]
            i+=1

        rightSum.reverse()
        
        for r,l in zip(rightSum,leftSum):
            ans.append(abs(r-l))
        
        return ans

