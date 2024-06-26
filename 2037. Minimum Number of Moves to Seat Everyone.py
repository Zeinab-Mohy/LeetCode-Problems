class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        ans=0
        seats.sort()
        students.sort()
        for (i,ii) in zip(seats,students):
            ans+=abs(i-ii)

        return ans
