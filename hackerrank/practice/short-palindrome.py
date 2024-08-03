def shortPalindrome(s):
    n = len(s)
    count = 0
    for i in range(0, n - 3):
        j = i + 3
        while ((j < n) and (s[i] != s[j])):
            j += 1
        if (j == n):
            break
        else:
            for l1 in range(j - 1, i + 1, -1):
                k = i + 1
                while (k < l1):
                    if (s[k] == s[l1]):
                        count += 1
                    k += 1
                    #
                #
            #
        #
    #
    return count % (1000000007)
