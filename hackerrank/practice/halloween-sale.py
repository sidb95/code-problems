"""
WA
a_1 = p
a_2 = p - d
a_3 = p - d * 2
.
.
a_n-1 = m
a_n = m
"""

def howManyGames(p, d, m, s):
    if (s < p):
        return 0
    s -= p
    count = 1
    if (p <= m):
        cost = m
    else:
        cost = p - d
    while (s >= m):
        if (cost <= m):
            cost = m
            s -= cost
            count += 1
        else:
            s -= cost
            cost -= d
            count += 1
    return count

