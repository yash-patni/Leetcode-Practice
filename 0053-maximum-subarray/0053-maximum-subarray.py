class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum=0
        ans=nums[0]
        n=len(nums)
        if n==1:
            return nums[0]
        for i in range(n):
            sum+=nums[i]
            ans=max(ans, sum)
            if sum<0:
                sum=0
        
        return ans
