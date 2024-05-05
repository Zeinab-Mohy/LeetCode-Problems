import numpy as np
class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        nums.sort()
        np_nums=np.array(nums)
        for i in nums:
            if(i<0):
                max_ans=i*-1
                max_neg=np_nums[np_nums==max_ans]
                if(len(max_neg)!=0):
                    return max_neg[-1]
        return -1
                    
        
