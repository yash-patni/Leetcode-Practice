class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans=[[1]]
        if numRows==1:
            return ans
        ans.append([1,1])
        if numRows==2:
            return ans
        for i in range(2, numRows):
            ls=[]
            ls.append(1)
            
            for j in range(1, i):
                ls.append(ans[i-1][j-1]+ans[i-1][j])
            
            ls.append(1)
            ans.append(ls)
        
        return ans