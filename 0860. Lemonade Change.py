class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        lst=[];ch=0;sumLst=0

        for i in bills:
            if(i==5):
                lst.append(i)
                sumLst+=i
            else:
                if(len(lst)==0):
                    ch=1
                    break
                else:
                    if(i==10):
                        if(5 in lst):
                            lst.remove(5)
                            lst.append(i)
                        else:
                            ch=1
                            break
                    elif(i==20):
                        if(5 in lst):
                            lst.remove(5)
                            if(10 in lst):
                                lst.remove(10)
                                lst.append(i)
                            elif(lst.count(5)>=2):
                                lst.remove(5)
                                lst.remove(5)
                                lst.append(i)
                            else:
                                ch=1
                                break
                        else:
                            ch=1
                            break
        if(ch==1):
            return False
        else:
            return True
