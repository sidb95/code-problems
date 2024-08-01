def isPalindrome(s):
    s1 = s[::-1]
    return (s == s1)

def palindromeIndex(s):
    answer = -1
    n = len(s)
    i = 0
    j = n - 1
    while (i < j):
        if (s[i] != s[j]):
            s1 = s[:i] + s[i + 1:]
            if (isPalindrome(s1)):
                answer = i
                break
            s1 = s[:j] + s[j + 1:]
            if (isPalindrome(s1)):
                answer = j
                break
        i += 1
        j -= 1
    return answer
