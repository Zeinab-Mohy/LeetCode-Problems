class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        arr2=list(arr)
        arr2.sort()
        dic={}
        c=1

        for num in arr2:
            if num not in dic:
                dic[num] = c  
                c+=1

        ans=[]
        for num in arr:
            ans.append(dic[num])

        return ans
