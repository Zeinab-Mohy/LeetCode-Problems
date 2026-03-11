class Solution(object):
    def canWinNim(self, n):
        if n<=3:
            return True
        else:
            if n%4==0:
                return False
            else:
                if (n-1)%4==0 or (n-2)%4==0 or (n-3)%4==0:
                    return True
                else:
                    return False
        
