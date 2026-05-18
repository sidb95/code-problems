"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. A
# 3. B
# 4. m
# 5. D
# Out:
#
#
#
# Solution:
#
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        A = list(map(int, input().split()))
        B = list(map(int, input().split()))
        m = int(input())
        D = list(map(int, input().split()))
        E = [] # wanted in A
        nums = [] # extras of A
        VIS = {}
        A = sorted(A)
        B = sorted(B)
        if (A == B):
            if (D[len(D) - 1] in A):
                print("YES")
        else:
            for i in range(0, n):
                if (A[i] not in VIS):
                    VIS[A[i]] = True
                    num1 = B.count(A[i])
                    num2 = A.count(A[i])
                    if (num1 == 0):
                        nums += ([A[i]] * num2)
                    else:
                        if (num1 > num2):
                            E += ([A[i]] * (num1 - num2))
                        elif (num1 == num2):
                            continue
                        else:
                            nums += ([A[i]] * (num2 - num1))
                        #
                    #
                #
            #
            VIS = {}
            for i in range(0, n):
                if (B[i] not in VIS):
                    VIS[B[i]] = True
                    if (B[i] not in A):
                        E.append(B[i])
            if (len(E) != len(nums)):
                print("NO")
            else:
                FLAG = True
                print(E, D, nums)
                for i in range(0, m):
                    # print (D[i], E, A, (D[i] not in E) and (D[i] not in A))
                    if ((D[i] not in E) and (D[i] not in A)):
                        FLAG = False
                    else:
                        if (D[i] not in E):
                            continue
                        else:
                            for j in range(0, len(E)):
                                if (D[i] == E[j]):
                                    E.pop(j)
                                    break
                            for j in range(0, n):
                                if (A[j] in nums):
                                    num1 = A[j]
                                    A[j] = D[i]
                                    A = sorted(A)
                                    for k in range(0, len(nums)):
                                        if (nums[k] == num1):
                                            nums.pop(k)
                                            break
                                    
                                    #
                                #
                            #
                            if (A == B):
                                FLAG = True
                                break
                    #
                #
                if (not FLAG):
                    print("NO")
                else:
                    print("YES")
                #
            #
        #
    return

__main__()
