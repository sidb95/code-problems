def squares(a, b):
    count = 0
    for i in range(a, b + 1):
        proot = int(i ** (0.5))
        if ((proot * proot) == i):
            count += 1
    return count
