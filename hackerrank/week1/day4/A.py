#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gridChallenge' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING_ARRAY grid as parameter.
#

def gridChallenge(grid):
  gridA = []
  for row in grid:
    arr = sorted(row)
    gridA.append(arr)
  #
  # gridA is List[List[char]]
  #
  m = len(gridA)
  n = len(gridA[0])
  for j in range(0, n):
    col = []
    colA = []
    for i in range(0, m):
      col.append(gridA[i][j])
      colA.append(gridA[i][j])
    colA = sorted(colA)
    if (colA != col):
      return "NO"
  return "YES"
  

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        grid = []

        for _ in range(n):
            grid_item = input()
            grid.append(grid_item)

        result = gridChallenge(grid)

        fptr.write(result + '\n')

    fptr.close()
