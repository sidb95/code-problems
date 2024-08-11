"""
sbhatore
10 August 2024

# Assumptions:
#
#
#
# In:
#
#
#
#
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
    S = {}
    answer = 0
    for t in range(0, T):
        s = input()
        a = -1
        b = -1
        if (s.count(' ') > 0):
            a, b = map(int, s.split())
        #
        if (s == "3"):
            print(answer)
        else:
            if (a == 1):
                if b in S:
                    if (S[b] == 0):
                        answer += 1
                    S[b] += 1
                else:
                    S[b] = 1
                    answer += 1
            else:
                S[b] -= 1
                if (S[b] == 0):
                    answer -= 1
            #
        #
    return


__main__()
