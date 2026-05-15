class Solution:
    def findMin(self, nums: List[int]) -> int:
        f=nums[0]
        l=nums[len(nums)-1]
        i=1;ii=len(nums)-2
        if f==l:
            return f
        while f<l:
            newF=nums[i]
            if f<newF:
                return f
            else:
                f=newF
                i+=1
        while l<f:
            newL=nums[ii]
            if l<newL:
                return l
            else:
                l=newL
                ii-=1
