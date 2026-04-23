class Solution:
    def distance(self, nums: List[int]) -> List[int]:
        dct={}
    
        for i, ii in enumerate(nums):
            if ii not in dct:
                dct[ii]=[]
            dct[ii].append(i)


        result=[0]*len(nums)
        for i in dct.values():
            if len(i)==1:
                result[i[0]]=0
            else:
                n = len(i)
                res = [0] * n
                res[0] = sum(abs(i[0] - x) for x in i)
                for k in range(1, n):
                    diff = i[k] - i[k-1]
                    res[k] = res[k-1] + diff * k - diff * (n - k)
                for k in range(n):
                    result[i[k]] = res[k]
        return result
