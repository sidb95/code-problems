"""
1. lower s by deleting recurring As,
2. lower s by deleting recurring Bs
"""

def alternatingCharacters(s):
    n = len(s)
    count = 0
    i = 0
    while (i < n):
        count1 = 0
        j = i
        c = s[i]
        while ((j < n) and (s[j] == c)):
            count1 += 1
            j += 1
        if (count1 > 1):
            count += count1 - 1
        i = j
    return count
