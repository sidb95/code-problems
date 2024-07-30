"""
no1 = -1
if (n < c): no1 = 0
else: w = int(n / c), no1 += w, 
while (w > 1): 
    if (w < m): break, 
    else: w = int(w / m) + (w % m), no1 += int(w / m)
"""

def chocolateFeast(n, c, m):
    no1 = 0
    if (n < c):
        no1 = 0
    else:
        w = int(n / c)
        no1 += w
        while (w > 1):
            if (w < m):
                break
            else:
                no1 += int(w / m)
                w = int(w / m) + (w % m)
    return no1
