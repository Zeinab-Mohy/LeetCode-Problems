class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        res=0
        if len(cost)>2:
            cost.sort(reverse=True)
            c=0
            for i in cost:
                if c>1:
                    c=0
                else:
                    res+=i
                    c+=1
        else:
            for i in cost:
                res+=i
        return res
