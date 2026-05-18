"""
i = 0
n = len(c)
while i != n - 1
if c[i + 2] == 0: i += 2, else: i += 1 count += 1
"""

def jumpingOnClouds(c):
    n = len(c)
    i = 0
    count = 0
    while (i != (n - 1)):
        if (((i + 2) < n) and c[i + 2] == 0):
            i += 2
        else:
            i += 1
        count += 1
    return count
