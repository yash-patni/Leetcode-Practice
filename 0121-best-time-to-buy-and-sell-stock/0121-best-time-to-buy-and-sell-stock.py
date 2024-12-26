class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n=len(prices)
        profit=0
        buy=prices[0]
        for i in range(1, n):
            if prices[i]<buy:
                buy=prices[i]
            profit=max(profit, prices[i]-buy)
        
        return profit