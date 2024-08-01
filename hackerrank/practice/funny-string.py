"""
string: s, length: n,
sr = s.reverse()
v1 = ...
v2 = ...
v1 == v2
"""

def funnyString(s):
    n = len(s)
    sr = s[::-1]
    v1 = []
    v2 = []
    for i in range(1, n):
        v1.append(abs(ord(s[i]) - ord(s[i - 1])))
        v2.append(abs(ord(sr[i]) - ord(sr[i - 1])))
    if (v1 == v2):
        return "Funny"
    else:
        return "Not Funny"
