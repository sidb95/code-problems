def sumXor(n):
    count = 0
    for i in range(0, n + 1):
        if ((n + i) == (n ^ i)):
            count += 1
    return count
