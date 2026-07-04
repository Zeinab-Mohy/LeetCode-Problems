class Solution:
    def minimumCost(self, nums: List[int]) -> int:
        ans=0
        if len(nums)==3:
            for i in nums:
                ans+=i
        else:
            ans+=nums[0]
            nums[0]=100
            minn=min(nums)
            ans+=minn
            for i in range(1,len(nums)):
                if nums[i]==minn:
                    nums[i]=100
                    break
            
            minn=min(nums)
            ans+=minn
        return ans
