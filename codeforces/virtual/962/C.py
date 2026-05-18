"""
sbhatore
03 August 2024

# Assumptions:
# 1. 1-indexing

# in:
# 1. n, k
# 2. k string queries

# out:
# 1. k lines (min operations)

# summary:
# 1. iterate b's element in a
# pseudocode:
"""

def calcAnswer():
    pass

def __main__():
    T = int(input())
    for t in range(0, T):
        n, k = map(int, input().split())
        nums = []
        s1= input()
        s2 = input()
        for l1 in range(0, k):
            l, r = map(int, input().split())
            nums.append((l, r))
        for l1 in range(0, k):
            l = nums[l1][0]
            r = nums[l1][1]
            t1 = ''.join((s1[l - 1:r]))
            t2 = tuple(''.join((s2[l - 1:r])))
            num1 = len(t1)
            count = 0
            dict1 = {}
            for i in range(0, num1):
                if t1[i] in dict1:
                    dict1[t1[i]] += 1
                else:
                    dict1[t1[i]] = 1
            #
            for elmt in t2:
                if elmt not in dict1:
                    count += 1
                elif (dict1[elmt] != 0):
                    dict1[elmt] -= 1
                else:
                    count += 1
            #
            print(count)
            #
        #
    #
    return


__main__()
