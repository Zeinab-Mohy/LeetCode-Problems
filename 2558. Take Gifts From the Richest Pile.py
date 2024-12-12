class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        ans=0
        for i in range(k):
            maxx=max(gifts)
            ii=gifts.index(maxx)
            gifts[ii]=math.sqrt(gifts[ii])

        for i in gifts:
            ans+=math.trunc(i)

        return ans
