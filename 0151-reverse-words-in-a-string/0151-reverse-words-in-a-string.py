class Solution:
    def reverseWords(self, s: str) -> str:
        st=s[::-1]
        s=list(st)
        n=len(s)
        left=right=0
        i=0
        while i<n:
            while i<n and s[i]==' ':
                i+=1
            if i==n:
                break
            while i<n and s[i]!=' ':
                s[right]=s[i]
                right+=1
                i+=1
            rev=s[left:right][::-1]
            s=s[:left]+rev+s[right:]
            if right<n:
                s[right]=' '
            right+=1
            left=right
            i+=1
        
        return ''.join(s[:right]).rstrip()
