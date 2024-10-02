class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n=len(matrix)
        m=len(matrix[0])
        row=[0]*m
        col=[0]*n
        for i in range(n):
            for j in range(m):
                if matrix[i][j]==0:
                    row[j]=1
                    col[i]=1
        
        for i in range(n):
            for j in range(m):
                if row[j]==1 or col[i]==1:
                    matrix[i][j]=0
        
        return matrix