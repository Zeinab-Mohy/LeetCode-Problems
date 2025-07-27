class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        newList=nums1+nums2
        newList.sort()
        # print(newList)
        # print(len(newList)/2-1)
        if len(newList)%2!=0:
            return newList[len(newList)/2]
        else:
            return (newList[len(newList)/2-1]+newList[len(newList)/2])/2.0
    
