def maximumToys(prices, k):
    n = len(prices)
    prices = sorted(prices)
    sum1 = 0
    count = 0
    i = 0
    while ((i < n) and (sum1 < k)):
        sum1 += prices[i]
        if (sum1 < k):
            count += 1
        i += 1
    return count
