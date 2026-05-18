"""
dict1 = {1: [], 0: []}
1. lose contests with higher rating that are important
2. add those,
3. subtract remaining,
4. lose all non-important contests
"""

def luckBalance(k, contests):
    dict1 = [[], []]
    m = len(contests)
    sum1 = 0
    #
    for i in range(0, m):
        if (contests[i][1] == 1):
            dict1[1].append(contests[i][0])
        else:
            dict1[0].append(contests[i][0])
    #
    for val in dict1[0]:
        sum1 += val
    
    #
    dict1[1] = sorted(dict1[1])
    l1 = len(dict1[1])
    #
    for i in range(l1 - 1, l1 - 1 - k, -1):
        sum1 += dict1[1][i]
    for i in range(0, l1 - k):
        sum1 -= dict1[1][i]
    return sum1
