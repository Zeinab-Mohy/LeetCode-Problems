class Solution:
    def maximumSwap(self, num: int) -> int:
        c=-1

        listNum = [int(x) for x in str(num)]
        listNum2=[int(x) for x in str(num)]
        listNum2.sort(reverse=True)

        print(listNum2,listNum)

        for i,ii in zip(listNum2,listNum):
            c+=1
            if(i<=ii):
                listNum[c]=str(ii)
                continue
            else:
                print("ii",ii)
                f=listNum.index(i)
                count=listNum.count(i)
                if(count>1):
                    f=len(listNum) - 1 - listNum[::-1].index(i)

                # cc=-1
                # for xx in listNum:
                #     cc+=1
                #     if (xx==i):
                #         f=cc
                #     else:
                #         break
                print(f,ii,c,i)
                listNum[f]=ii
                listNum[c]=i
                break

        res=''
        for i in listNum:
            res+=str(i)

        return int(res)
