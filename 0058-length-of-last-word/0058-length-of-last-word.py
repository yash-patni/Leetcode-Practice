class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        count=0
        for i in range(len(s) - 1, -1, -1):
            if s[i] != " ":
                count += 1
            else:
                break
        
        return count