def toys(w):
    w = sorted(w)
    i = 0
    n = len(w)
    count = 0
    #
    while (i < n):
        num1 = w[i] + 4
        while ((i < n) and w[i] <= num1):
            i += 1
        count += 1
    #
    return count
