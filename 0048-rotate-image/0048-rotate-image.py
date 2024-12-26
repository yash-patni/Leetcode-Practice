class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n=len(matrix)

        #Transpose
        for i in range(n):
            for j in range(i, n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

        #Reverse
        for i in range(n):
            matrix[i].reverse()