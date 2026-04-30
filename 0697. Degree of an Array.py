class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        val=[]
        keys=[]
        maxx=[]
        nums2=list(nums)
        for i,ii in enumerate(nums2):
            if ii not in keys:
                keys.append(ii)
                freq=[]
                x=i+1
                for x in range(len(nums2)):
                    if nums2[i]==nums2[x]:
                        freq.append(x)
                # print(nums2[i],freq)
                val.append(freq)
                maxx.append(len(freq))
        # print(val)
        m=max(maxx)
        # print(m)
        res=[]
        for i in val:
            if len(i)==m:
                res.append(abs(i[0]-i[len(i)-1])+1)
                
        return min(res)
