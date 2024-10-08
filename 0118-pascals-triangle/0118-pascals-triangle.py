class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans=[[1]]
        if numRows==1:
            return ans
        
        ans.append([1,1])
        if numRows==2:
            return ans
        
        for i in range(2, numRows):
            prev=ans[i-1]
            x=[]
            x.append(1)
            for j in range(1,i):
                x.append(prev[j-1]+prev[j])
            
            x.append(1)
            ans.append(x)
        
        return ans