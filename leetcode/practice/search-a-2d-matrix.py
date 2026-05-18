class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m = len(matrix)
        n = len(matrix[0])
        start = 0
        end = m - 1
        while (start <= end):
            mid = start + ((end - start) // 2)
            if (matrix[mid][0] < target):
                start = mid + 1
            elif (matrix[mid][0] == target):
                return True
            else:
                end = mid - 1
            #
        #
        itr1 = 0
        itr2 = n - 1
        while (itr1 <= itr2):
            mid = itr1 + ((itr2 - itr1) // 2)
            if (matrix[start - 1][mid] < target):
                itr1 = mid + 1
            elif (matrix[start - 1][mid] == target):
                return True
            else:
                itr2 = mid - 1
            #
        #
        return False
