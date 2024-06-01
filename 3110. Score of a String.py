class Solution:
    def scoreOfString(self, s: str) -> int:
        ss=s[1::]
        ans=0

        for (i,ii) in zip(s,ss):
            ans+=abs(ord(i)-ord(ii))

        return ans
