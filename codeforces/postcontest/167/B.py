def lenLongestCommonSubsequence(s1: str, m: int, s2: str, n: int) -> int:
    inS2 = []
    for i in range(0, m):
        if (s1[i] in s2):
            inS2.append(s1[i])
    k = len(inS2)
    inS2 = tuple(inS2)
    answerMax = 0
    #
    for i in range(0, k):
        FLAG = True
        answer = 0
        itr = i
        ptr = 0
        #
        while (FLAG):
            #
            for j in range(ptr, n):
                if (s2[j] == inS2[itr]):
                    answer += 1
                    itr += 1
                    ptr = j + 1
                if (itr == k):
                    FLAG = False
                    break
                if (ptr == n):
                    FLAG = False
                    break
            itr += 1
            if (itr >= k or (not FLAG)):
                break
        answerMax = max(answerMax, answer)
    return answerMax

def __main__():
    t = input()
    T = int(t)
    for i in range(0, T):
        s1 = input()
        s2 = input()
        m = len(s1)
        n = len(s2)
        print(m + n - lenLongestCommonSubsequence(s1, m, s2, n))

__main__()