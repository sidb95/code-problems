"""
sbhatore
28 August 2024

# Assumptions:
#
#
#
# In:
# 1. n, k
# 2. a
#
#
# Out:
# 1. number of sunk ships
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
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        itr = 0
        ptr = n - 1
        count = 0
        answer = 0
        turn = True
        while ((itr <= ptr) and count <= k):
            if (itr == ptr):
                count += a[itr]
                if (count > k):
                    break
                else:
                    answer += 1
                #
                itr += 1
                ptr -= 1
            else:
                prevTurn = turn
                if (turn):
                    if (a[itr] > a[ptr]):
                        count += a[ptr]
                        count += a[ptr]
                        turn = True
                    else:
                        count += a[itr]
                        count += a[itr] - 1
                        turn = False
                else:
                    if (a[itr] > a[ptr]):
                        count += a[ptr]
                        count += a[ptr] - 1
                        turn = True
                    else:
                        count += a[itr]
                        count += a[itr]
                        turn = False
                    #
                #
                if (count > k):
                    break
                else:
                    if (a[itr] > a[ptr]):
                        a[itr] -= a[ptr]
                        ptr -= 1
                        answer += 1
                    elif (a[itr] == a[ptr]):
                        itr += 1
                        ptr -= 1
                        answer += 1
                    else:
                        a[ptr] -= a[itr]
                        itr += 1
                        answer += 1
                #
            #
        #
        print(answer)
    #
    return
        



__main__()
