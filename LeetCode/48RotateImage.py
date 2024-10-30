from typing import List
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        for i in range(len(matrix)):
            for j in range(len(matrix)-1,0-1,-1):
                print(matrix[j][i], sep=' ',end='')
            print()




# main start
sol= Solution()
l=[[1,2,3],
   [4,5,6],
   [7,8,9]]

sol.rotate(l)