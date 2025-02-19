class Solution:
    def hammingWeight(self, n: int) -> int:
        count=0
        while n:
            x=n%2
            if x:
                count+=1
            n=n//2
        
        return count