"""
WA
m = len(s)
n = len(t)
i = 0
p = 0
q = 0
while (p < m and q < n):
    if (s[p] == s[q]):
        p += 1
        q += 1
    else:
        break
i = n - p
if ((i + (m - p) <= k):
    return "YES"
else:
    return "NO"
"""

def appendAndDelete(s, t, k):
    if (s == t):
        return "Yes"
    m = len(s)
    n = len(t)
    p = 0
    q = 0
    while (p < m and q < n):
        if (s[p] == t[q]):
            p += 1
            q += 1
        else:
            break
    i = n - p
    j = m - p
    if ((i + j) <= k):
        return "Yes"
    else:
        return "No"
    