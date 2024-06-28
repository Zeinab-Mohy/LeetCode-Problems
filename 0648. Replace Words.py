class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        sentence = sentence.split(" ")
        ans=[]
        dic={}
        for i in dictionary:
            dic[i]=len(i)

        listDic = dict(sorted(dic.items(), key=lambda item: item[1]))
        dic2 = list(listDic.keys())

        # print(dic2)
        dic3=[]
        for i in dic2:
            dic3+=i[0]
        # print(dic3)
        for i in sentence:
            s = i[0]
            d=[]
            if s in dic3:
                for idx,ii in enumerate(dic3):
                    if (s == ii):
                        # print(dic2[dic3.index(ii)])
                        d.append(dic2[idx])
                # print(i,d)
                cc=0
                for jj in d:
                    if jj in i:
                        cc=1
                        # print(jj,i)
                        if(i.index(jj)==0):
                            ans+=jj
                            ans+=" "
                            break
                        else:
                            ans+=i
                            ans+=" "
                            break
                if(cc == 0):
                    ans+=i
                    ans+=" "
            else:
                ans+=i
                ans+=" "
        ans.pop()
        return "".join(ans)
