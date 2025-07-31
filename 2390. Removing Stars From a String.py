class Solution(object):
    def removeStars(self, s):
        ss=''
        for i in s:
            if i=='*':
                ss=ss[:-1]
            else:
                ss+=i
        return ss

        
