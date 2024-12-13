class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        ch=0
        arr.sort(reverse=True)
        print(arr)
        for i,ii in enumerate(arr):
            x=ii/2
            print(x)
            arr[i]="-1"
            if x in arr:
                ch=1
                break
            arr[i]=ii
        if ch==0:
            return False
        else:
            return True
