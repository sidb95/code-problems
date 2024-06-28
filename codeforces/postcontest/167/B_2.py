def subsequences(s1, ss, i, m):
    if (i == m):
        return ss
    arr = [s1[i]]
    for s in ss:
        s += s1[i]
        arr.append(s)
    return subsequences(s1, (arr + ss), i + 1, m)

def longestCommonSubsequenceAux(ss1, ss2):
    maxLen = 0
    for ss in ss1:
        size1 = len(ss)
        if (ss in ss2):
            maxLen = max(maxLen, size1)
    return maxLen

def longestCommonSubsequence(s1, s2):
    ss1 = []
    m = len(s1)
    ss2 = []
    n = len(s2)
    #
    ss1 = tuple(subsequences(s1, ss1, 0, m))
    #
    ss2 = tuple(subsequences(s2, ss2, 0, n))
    return longestCommonSubsequenceAux(ss1, ss2)

def __main__():
    t = input()
    T = int(t)
    for i in range(0, T):
        s1 = input()
        s2 = input()
        m = len(s1)
        n = len(s2)
        print(m + n - longestCommonSubsequence(s1, s2))

__main__()
