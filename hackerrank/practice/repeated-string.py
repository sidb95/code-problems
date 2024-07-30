"""
l1 = len(s)
d1 = int(n / l1)
r1 = (n % l1)
for i in 0:l1-1 -> if i < n % l1 num2 += 1, else num1 += 1
return (d1 * num1) + num2
"""

def repeatedString(s, n):
    l1 = len(s)
    d1 = int(n / l1)
    r1 = (n % l1)
    num1 = 0
    num2 = 0
    for i in range(0, l1):
        if (s[i] == 'a'):
            if (i < r1):
                num1 += 1
            num2 += 1
    return ((d1 * num2) + num1)
