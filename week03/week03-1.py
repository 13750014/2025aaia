# week03-1.py
# LeetCode 2579. Count Total Number of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
            return n*n +(n-1)*(n-1)
            #觀察圖片，旋轉45度，看到正方形
