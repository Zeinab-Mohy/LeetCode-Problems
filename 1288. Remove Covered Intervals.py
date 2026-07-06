class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort()
        c=0
        s=[]
        ss=[]
        for i,ii in enumerate(intervals):
            ss.append(ii[0])
            s.append(ii[1])
        x=0
        sMax=s[0]
        sMin=ss[0]
        while x<len(s)-1:
            if sMax>=s[x+1]:
                c+=1
            elif sMin==ss[x+1] and s[x+1]>sMax:
                sMax=s[x+1]
                sMin=ss[x+1]
                c+=1
            else:
                sMax=s[x+1]
                sMin=ss[x+1]
            x+=1
        return len(intervals)-c
