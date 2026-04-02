class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        idx=-1
        t=list(t)
        for i in s:
            if i not in t:
                return False
            else:
                ii=t.index(i)
                if idx<ii:
                    for x in range(ii+1):
                        t[x]='0'
                    idx=ii
                    continue
                return False
        return True
