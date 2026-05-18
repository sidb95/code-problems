"""
s, n
i = 0, j = n - 1
while (i < j)
FLAG = theLoveLetterMysteryAux(s[i], s[j])
if (FLAG): count += ord(s[i]) - ord(s[j])
else: count += ord(s[j]) - ord[s[i]]

"""

def theLoveLetterMystery(s):
    n = len(s)
    i = 0
    j = n - 1
    count = 0
    while (i < j):
        count += abs(ord(s[i]) - ord(s[j]))
        i += 1
        j -= 1
    return count
