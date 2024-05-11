class Solution:
    def kthSmallestPrimeFraction(self, arr: List[int], k: int) -> List[int]:
        arr2=arr[:-1]
        arr.reverse()
        dic={}
        for i in arr2:
            for ii in arr:
                if(i==ii or i>ii):
                    continue
                else:
                    div=i/ii
                    dic[div]=[i,ii]

        myKeys = list(dic.keys())
        myKeys.sort()
        sorted_dict = {i: dic[i] for i in myKeys}
        return sorted_dict[myKeys[k-1]]
