import numpy as np
def digit(n):
        d=[]
        nn=int(n)
        while nn!=0:
            dd=int(nn%10)
            # if dd == 0:
            #     break
            # print(dd)
            d.append(dd)
            nn=nn//10
        ans=np.array(d)
        return ans
class Solution(object):
    

    def isHappy(self, n):
        arr=digit(n)
        # print(arr)
        summ=-1
        repeated=[]
        while True:
            if summ == 1:
                return True
            summ=np.sum(arr**2)
            if summ in repeated:
                return False
            repeated.append(summ)
            # print(arr,summ)
            arr=digit(summ)
                
            
