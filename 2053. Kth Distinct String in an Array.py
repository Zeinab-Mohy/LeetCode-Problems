class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        ans=[]
        for i in arr:
            if(arr.count(i)==1):
                ans.append(i)
        if(len(ans)<k):
            return ""
        return ans[k-1]
