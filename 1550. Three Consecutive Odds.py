class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        for idx,i in enumerate(arr):
            x=idx
            r = range(x+1, x+3)
            c=0
            ans=[]
            if(arr[idx]%2!=0 and len(arr)>=(idx+3)):
                ans.append(arr[idx])
                for idx2 in r:
                    if(arr[idx2]%2==0):
                        break
                    else:
                        c+=1
                        ans.append(arr[idx2])
                if(c==2):
                    return True
        return False
