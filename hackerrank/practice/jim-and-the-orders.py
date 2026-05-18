def jimOrders(orders):
    dict1 = {}
    nums = []
    n = len(orders)
    for i in range(0, n):
        if (orders[i][1] in dict1):
            dict1[orders[i][1]].append(orders[i][0])
        else:
            dict1[orders[i][1]] = [orders[i][0]]
    k = sorted(list(dict1.keys()))
    for key in k:
        dict1[key] = sorted(dict1[key])
        for j in range(0, len(dict1[key])):
            nums.append(dict1[key][j])
    return nums
