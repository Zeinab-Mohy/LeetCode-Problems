class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        for i in arr:
            if i in target:
                x=target.index(i)
                target[x]=-1
                continue
            else:
                return False
        return True
