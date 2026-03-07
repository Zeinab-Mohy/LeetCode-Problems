class Solution(object):
    def isIsomorphic(self, s, t):
        s=list(s)
        t=list(t)
        k=set(s)
        dict1=[];dict2=[]
        # print(k)
        for ii in k:
            v=[]
            idx=0
            for i in range(idx,len(s)):
                if ii==s[i]:
                    v.append(i)
                idx+=1
            # print(ii,v)
            dict1.append(v)
        k=set(t)
        for ii in k:
            v=[]
            idx=0
            for i in range(idx,len(t)):
                if ii==t[i]:
                    v.append(i)
                idx+=1
            # print(ii,v)
            dict2.append(v)
        if len(dict1)==len(dict2):
            for i in dict1:
                if i in dict2:
                    pass
                else:
                    return False
            return True
        return False
            
