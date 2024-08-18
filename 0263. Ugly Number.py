class Solution:
    def isUgly(self, n: int) -> bool:
        lst=[5,3,2]
        if(n==0):
            return False
        for i in lst:
            while(n%i==0):
                n/=i
        if(n==1):
            return True
        else:
            return False
