class Solution:
    def canBeEqual(self, s1: str, s2: str) -> bool:
        s1=list(s1)
        s2=list(s2)
        for i in range(4):
            if s1[i]!=s2[i]:
                if i+2<=3 and s1[i]==s2[i+2] and s2[i]==s1[i+2]:
                    s1[i]=s2[i]
                    s1[i+2]=s2[i+2]
                    # print(s1)
                else:
                    # print(s1[i],s2[i])
                    return False
        
        return True
