class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans=[]
        for i in nums:
            lst=list(str(i))
            for i in lst:
                ans.append(int(i))
        return ans
