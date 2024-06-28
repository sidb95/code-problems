#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'bfs' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER m
#  3. 2D_INTEGER_ARRAY edges
#  4. INTEGER s
#

class Queue1:
  def __init__(self):
    self.Q = []
  
  def insert(self, node):
    L = []
    L.append(node)
    for q in self.Q:
      L.append(q)
    self.Q = L
  
  def remove(self):
    self.Q.pop()
  
  def front(self):
    return self.Q[0]

  def back(self):
    size1 = len(self.Q)
    return self.Q[size1 - 1]

  def empty(self):
    return (self.Q == [])

def bfs(n, m, edges, s):
    dic1 = {}
    keys = []
    #
    for edge in edges:
        if (edge[0] not in keys):
            dic1[edge[0]] = []
            dic1[edge[0]].append(edge[1])
            keys.append(edge[0])
            if (edge[1] not in keys):
                dic1[edge[1]] = []
                dic1[edge[1]].append(edge[0])
                keys.append(edge[1])
            else:
                dic1[edge[1]].append(edge[0])
        else:
            dic1[edge[0]].append(edge[1])
            if (edge[1] not in keys):
                dic1[edge[1]] = []
                dic1[edge[1]].append(edge[0])
                keys.append(edge[1])
            else:
                dic1[edge[1]].append(edge[0])
    #
    lis1 = list(dic1.keys())
    for i in range(1, n + 1):
        if i not in lis1:
           dic1[i] = []
    Q = Queue1()
    Q.insert((s, 0))
    answer = []
    #
    vis = []
    #
    while (not Q.empty()):
        q = Q.back()
        if (q in vis):
           Q.remove()
           continue
        vis.append(q)
        if (q[1] != 0):
            answer.append(q[1] * 6)
        if q[0] in lis1:
            for val in dic1[q[0]]:
                Q.insert((val, q[1] + 1))
        else:
            answer.append(-1)
        Q.remove()
    return answer

if __name__ == '__main__':
    print(bfs(4, 3, [[1, 2], [1, 3], [3, 4]], 1))
