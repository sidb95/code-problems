#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'truckTour' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY petrolpumps as parameter.
#

def truckTour(petrolpumps):
  n = len(petrolpumps)
  for i in range(0, n):
    rem_fuel = petrolpumps[i][0]
    FLAG = False
    distance = petrolpumps[i][1]
    for j in range(i + 1, i + n):
      if (rem_fuel >= distance):
        rem_fuel -= distance
        rem_fuel += petrolpumps[j % n][0]
        distance = petrolpumps[j % n][1]
      else:
        FLAG = True
        break
    if (FLAG):
      break
    else:
      if (rem_fuel >= distance):
        return i
  return -1


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    petrolpumps = []

    for _ in range(n):
        petrolpumps.append(list(map(int, input().rstrip().split())))

    result = truckTour(petrolpumps)

    fptr.write(str(result) + '\n')

    fptr.close()
