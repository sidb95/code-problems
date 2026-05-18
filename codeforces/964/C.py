"""
sbhatore
06 August 2024

# Assumptions:
#
#
#
# In:
# 1. n, s, m
# 2. a_i, 0 <= i < n
#
#
# Out:
# 1. YES / NO
#
#
# Solution:
# 1. sort according to the first tuple element
# 2. use a stack
#
# pseudocode:
"""

import operator

class Stack:
    def __init__(self):
        self.nums = []

    def push(self, val):
        self.nums.append(val)

    def pop(self):
        n = self.length()
        num1 = -1
        if (not self.empty()):
            num1 = self.nums[n - 1]
            self.nums.pop(self.length() - 1)
        return num1

    def empty(self):
        return (self.nums == [])

    def length(self):
        return len(self.nums)

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n, s, m = map(int, input().split())
        A = []
        for i in range(0, n):
            l1, r1 = map(int, input().split())
            A.append((l1, r1))
        A = sorted(A, key=operator.itemgetter(0))
        S = Stack()
        S.push(A[0])
        i = 1
        FLAG = False
        while ((i < n) and (not S.empty())):
            num1 = S.pop()
            if (i < n):
                if (A[i][0] > num1[1]):
                    if ((A[i][0] - num1[1]) >= s):
                        FLAG = True
                        break
                    else:
                        S.push(A[i])
            i += 1
        if (not FLAG):
            if (A[0][0] >= s):
                print("YES")
            elif (m - A[n - 1][1] >= s):
                print("YES")
            else:
                print("NO")
        else:
            print("YES")
        #
    #
    return
        


__main__()
