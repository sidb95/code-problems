def powerSum(X, N):
    srt = int(X ** 0.5)
    count = 0
    VIS = {}
    #
    for i in range(1, srt + 1):
        for j in range(i, srt + 1):
            if ((i == j) or (i, j) in VIS):
                continue
            VIS[(i, j)] = True
            VIS[(j, i)] = True
            if (((i ** N) + (j ** N)) == X):
                count += 1
            #
        #
    #
    return count
