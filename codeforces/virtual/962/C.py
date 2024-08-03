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
            t2 = ''.join((s2[l - 1:r]))
            num1 = len(t1)
            count = 0
            #
            for i in range(0, num1):
                j = 0
                FLAG = True
                #
                while (j < num1):
                    #
                    if ((t2[i] == t1[j])):
                        t1 = t1[:j] + "-1" + t1[j + 1:]
                        FLAG = False
                        break
                    j += 1
                    #
                #
                if (FLAG):
                    count += 1
                #
            #
            print(count)
            #
        #
    #
    return


__main__()
