import math
from typing import List

class Solution:
    def closestPrimes(self, left: int, right: int) -> List[int]:
        def sieve(n: int):
            is_prime = [True] * (n + 1)
            is_prime[0] = is_prime[1] = False  
            for i in range(2, int(math.sqrt(n)) + 1):
                if is_prime[i]:
                    for j in range(i * i, n + 1, i):
                        is_prime[j] = False
            return is_prime
        
        is_prime = sieve(right)
        a = [i for i in range(left, right + 1) if is_prime[i]]

        if len(a) < 2:
            return [-1, -1]
        
        ans = [a[0], a[1]]
        mini = a[1] - a[0]
        
        for i in range(2, len(a)):
            diff = a[i] - a[i - 1]
            if mini > diff:
                mini = diff
                ans = [a[i - 1], a[i]]
        
        return ans
