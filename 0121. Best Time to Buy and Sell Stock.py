class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price=prices[0]
        result=[]
        for i in prices:
            if i<min_price:
                min_price=i
            else:
                result.append(i-min_price)
        return max(result)
