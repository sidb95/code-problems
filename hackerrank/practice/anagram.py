def anagram(s):
    answer = -1
    count = 0
    n = len(s)
    num1 = int(n / 2)
    s1 = s[:num1]
    s2 = s[num1:]
    #
    if (len(s1) != len(s2)):
        return answer
    else:
        s1 = sorted(s1)
        s2 = sorted(s2)
        for i in range(0, num1):
            if (s1[i] != s2[i]):
                count += 1
        return count
