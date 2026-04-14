def dis(x, nums):
    j=-1;f=-1;ans=[]
    for i,ii in enumerate(nums):
        if ii==x:
            ans.append(i)
            j=i  
    print(ans)
    c=1;i=1;pre=ans[0];result=0
    while c<3:
        result+=abs(ans[i]-pre)
        pre=ans[i]
        c+=1
        i+=1
    result+=abs(pre-ans[0])
    return result  
class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        ans=1000
        for ii,i in enumerate(nums):
            if i>0 and nums.count(i)>=3:
                ans=min(dis(i, nums),ans)
                nums[ii]=-1
        if ans==1000:
            return -1
        return ans
