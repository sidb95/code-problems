"""
s, n
count = 0
s1 = ""
for i in range(0, n - 1):
    for j in range(i + 1, n):
        if (s[i] != s[j]):
            s1 = s
            for k in range(0, n):
                if (not(s[k] == s[i] or s[k] == s[j])):
                    s1 = s1.replace(s[k], '')
            l1 = 0
            m = len(s1)
            s2 = ""
            while (l1 < m):
                count1 = 0
                c1 = s1[l1]
                l2 = l1
                s2 = s1
                while ((l1 < m) and (s1[l1] == c1)):
                    count1 += 1
                    l1 += 1
                if (count != 1):
                    s1 = s2[:l2 + 1]
                    if (l1 < m):
                        s1 += s2[l1:]
#
return len(s1)
"""

def alternate(s):
    n = len(s)
    if (n == 1):
        return 0
    s1 = ""
    count = 0
    #
    for i in range(0, n - 1):
        for j in range(i + 1, n):
            if (s[i] != s[j]):
                s1 = s
                for k in range(0, n):
                    if (not ((s[k] == s[i]) or (s[k] == s[j]))):
                        s1 = s1.replace(s[k], '')
                l1 = 0
                p = len(s1)
                FLAG = True
                #
                while (l1 < p):
                    count1 = 0
                    c1 = s1[l1]
                    #
                    while ((l1 < p) and (s1[l1] == c1)):
                        count1 += 1
                        l1 += 1
                    if (count1 != 1):
                        FLAG = False
                        break
                #
                if (FLAG):
                    count = max(count, len(s1))
                #
            #
        #
    #
    return count
