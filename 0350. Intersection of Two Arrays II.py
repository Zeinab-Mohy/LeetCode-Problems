class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1.sort()
        nums2.sort()
        ans=[]
        for idx,i in enumerate(nums1):
            if i in nums2:
                ans+=[i]
                nums1[idx]=-1
                nums2.remove(nums2[nums2.index(i)])
            
        return ans
