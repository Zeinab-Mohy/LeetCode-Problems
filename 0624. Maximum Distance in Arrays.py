class Solution:
    def maxDistance(self, arrays: List[List[int]]) -> int:
        dicMax={};dicMin={};ii=0
        for i in arrays:
            dicMax[ii]=i[len(i)-1]
            dicMin[ii]=i[0]
            ii+=1

        dicMin=dict(sorted(dicMin.items(),key=lambda item:item[1]))
        dicMax=dict(sorted(dicMax.items(),key=lambda item:item[1],reverse=True))
        list1=list(dicMax.values())
        list2=list(dicMin.values())
        ans=[];x=-1;xx=-1
        for i,ii in zip(dicMax,dicMin):
            x+=1;xx+=1
            if(i==ii):
                ans.append(list1[x]-list2[xx+1])
                ans.append(list1[x+1]-list2[xx])
                break
            else:
                ans.append(list1[x]-list2[xx])
                break 
        ans=max(ans,default=0)
        return ans
