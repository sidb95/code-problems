def superDigit(n, k):
    p = (n * k)
    if (len(p) == 1):
        return p
    else:
        a = map(int, [char for char in p])
        return superDigit(str(sum(a)), 1)
