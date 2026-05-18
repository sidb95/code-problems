"""
w, n
i = n - 1
while ((i > 0) and w[i] < w[i - 1]):
    i -= 1
if (i == 0):
    return ''.join(sorted(w))
else:
    w = w[:i] + w[i + 1] + ''.join(sorted(w[i + 2:] + w[i]))
"""

def nextIndex(w, i, n):
    s = sorted(w)
    c = w[i]
    j = 0
    while (j < n):
        if (s[j] == c):
            if (j == (n - 1)):
                c = s[j]
            else:
                c = s[j + 1]
            break
        j += 1
    for j in range(n - 1, -1, -1):
        if (w[j] == c):
            return j
    return j
    
def nextIndex1(w, i, n):
    c = w[i]
    j = i - 1
    while (j >= 0):
        if (ord(w[j]) < ord(c)):
            return j
        j -= 1
    return j

def biggerIsGreater(w):
    n = len(w)
    l1 = 0
    c = w[l1]
    while (l1 < n and (w[l1] == c)):
        l1 += 1
    if (l1 == n):
        return "no answer"
    if (len(w) == 2):
        return w[::-1]
    i = n - 1
    while ((i > 0) and w[i] <= w[i - 1]):
        i -= 1
    if (i == 0):
        return "no answer"
    else:
        if ((i + 2) < n):
            j = nextIndex(w, i, n)
            if (j > i):
                if (j + 1 < n):
                    return w[:i - 1] + w[j] + ''.join(sorted(w[i:j] + w[i - 1] + w[j + 1:]))
                else:
                    return w[:i - 1] + w[j] + ''.join(sorted(w[i:j] + w[i - 1]))
            else:
                k = nextIndex1(w, j, n)
                if (k == -1):
                    return "no answer"
                print(i, k)
                if ((i + 2) < n):
                    return w[:k] + w[i + 1] + ''.join(sorted(w[k + 1:i + 1] + w[k] + w[i + 2:]))
                else:
                    return w[:k] + w[i + 1] + ''.join(sorted(w[k + 1:i + 1] + w[k]))
        elif (i + 1 < n):
            k = nextIndex1(w, i, n)
            if (k == -1):
                return "no answer"
            print(i, k)
            if ((i + 2) < n):
                return w[:k] + w[i + 1] + ''.join(sorted(w[k + 1:i + 1] + w[k] + w[i + 2:]))
            else:
                return w[:k] + w[i + 1] + ''.join(sorted(w[k + 1:i + 1] + w[k]))
        else:
            
            return w[:i - 1] + w[i] + w[i - 1]
