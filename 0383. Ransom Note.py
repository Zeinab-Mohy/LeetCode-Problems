class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        rep=[]
        for i in ransomNote:
            if i not in rep:
                countI=ransomNote.count(i)
                countM=magazine.count(i)
                if countI<=countM:
                    rep.append(i)
                else:
                    return False
        return True
