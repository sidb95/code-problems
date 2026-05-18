def beautifulPairs(A, B):
    A = sorted(A)
    B = sorted(B)
    n = len(A)
    for i in range(0, n):
        if (A[i] != B[i]):
            B[i] = A[i]
    count = n
    B = sorted(B)
    for i in range(0, n):
        if (A[i] != B[i]):
            count -= 1
    return count
