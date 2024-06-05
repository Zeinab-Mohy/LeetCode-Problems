class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        s=words[0];ans=[];ind=[]
        for i in s:
            ch=0
            for ii,val in enumerate(words):
                if(words[ii].find(i)==-1):
                    ch=1
                    break
                else:
                    xx=list(words[ii])
                    xx[words[ii].find(i)]="1"
                    words[ii]="".join(xx)
            if(ch==0):
                ans.append(i)
                    
        return ans
