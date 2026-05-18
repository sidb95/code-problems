"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. m
# 3. k
# 4. s
# Out:
# 1. "YES" / "NO"
#
#
# Solution:
# 1. if there are no crocodiles:
#       - check if he can jump all 'W's
#       - check if he can swim through water
# 2. if there are crocodiles:
#           - check if 'C' is after 'W' and he cannot jump from
#               - if there exists a log before 'W'
#                   - check if he can jump through the crocodile
#           - else:
#               - check if he can cross the maximum 'W's
#                   - either by jump,
#                   - or swim length
#
# pseudocode:
"""

def calcAnswer(s, n):
    i = 0
    answer = 0
    while (i < n):
        while ((i < n) and (s[i] != 'W')):
            i += 1
        #
        count = 0
        #
        if (i != n):
            while ((i < n) and (s[i] == 'W')):
                count += 1
                i += 1
            #
            answer = max(answer, count)
    return answer


def myFunc(n, m, k, s):
    v1 = calcAnswer(s, n)
    v2 = s.count('W')
    if (m >= n):
        print("YES")
        return
    if 'C' not in s:
        if (m > v1):
            print("YES")
            return
        elif (k >= v2):
            print("YES")
            return
        else:
            print("NO")
            return
        #
    else:
        if (m > n):
            print("YES")
            return
        else:
            i1 = -1
            i2 = -1
            for i in range(0, n):
                if (s[i] == 'L'):
                    i1 = i
                elif (s[i] == 'W'):
                    if (i1 == -1):
                        count1 = 1
                        while ((i < n) and s[i] == 'W'):
                            count1 += 1
                            i += 1
                        if (i == n):
                            j1 = m - 1
                            if (s[j1] == 'W'):
                                if (k >= (n - j1)):
                                    print("YES")
                                    return
                                break
                        elif (s[i] == 'C'):
                            break
                        else:
                            if (m > i):
                                myFunc(n, m, k, s[i:])
                                return
                            else:
                                myFunc(n, m, (k - (i - m + 1)), s[i:])
                                return
                else:
                    if (s[i] == 'C'):
                        j = i
                        if (i1 == -1):
                            if (i2 == -1):
                                count2 = 0
                                while ((j < n) and (s[j] == 'C')):
                                    count2 += 1
                                    j += 1
                                if (j == n):
                                    break
                                else:
                                    if (m < count2):
                                        break
                                    else:
                                        if (s[j] == 'L'):
                                            a = s[j:]
                                            myFunc(n, m, k, a)
                                            return
                                        elif (s[j] == 'W'):
                                            l1 = j
                                            count3 = 0
                                            while ((l1 < n) and (s[l1] != 'L')):
                                                l1 += 1
                                                count3 += 1
                                            if (l1 == n):
                                                if (k >= count3):
                                                    print("YES")
                                                    return
                                                break
                                                #
                                            else:
                                                k -= count3
                                                myFunc(n, m, k, s[l1 + 1:])
                                                return
                                            #
                                        #
                                    #
                                #
                            #
                        #
                    #
                #
            #
        #
        print("NO")


def __main__():
    T = int(input())
    for t in range(0, T):
        n, m, k = map(int, input().split())
        s = input()
        myFunc(n, m, k, s)
    #
    return
__main__()
