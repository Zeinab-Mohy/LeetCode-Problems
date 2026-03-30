class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        dct={}
        for i,x in enumerate(nums):
            if x not in dct:
                dct[x]=i
            else:
                if abs(i-dct[x])<=k:
                    return True
                dct[x]=i
        return False
