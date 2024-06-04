class Solution:
    def longestPalindrome(self, s: str) -> int:
        f=""
        for i in s:
            if(f.find(i)==-1):
                f+=i
        ans=[]
        for i in f:
            ans.append(s.count(i))
        sum=0;ch=0
        for i in ans:
            if(i%2==0):
                sum+=i
            else:
                ch=1
                sum+=(i-1)
        if(ch==1):
            return (sum+1)
        else:
            return sum
