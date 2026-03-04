class Solution(object):
    def numSpecial(self, mat):
        newList=[]
        count=0
        for idx,i in enumerate(mat):
            for idxx,ii in enumerate(mat[idx]):
                if mat[idx][idxx] == 1:
                    newList.append((idx,idxx))
        print(newList)
        newRows=[]
        result=[]
        newColumns=[]
        resultColumns=[]
        for idx,i in enumerate(newList):
            newRows.append(newList[idx][0])
        for idx,i in enumerate(newList):
            newColumns.append(newList[idx][1])
        for idx,i in enumerate(newRows):
            c=newRows.count(newRows[idx])
            if c==1:
                result.append(newList[idx])
        print(result)
        for idx,i in enumerate(result):
            resultColumns.append(result[idx][1])
        for i in resultColumns:
            if newColumns.count(i) == 1:
                count+=1

        return count
        
