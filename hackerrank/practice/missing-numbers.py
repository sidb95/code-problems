def missingNumbers(arr, brr):
    dict1 = {}
    m = len(arr)
    nums = []
    #
    for i in range(0, m):
        if (arr[i] in dict1):
            dict1[arr[i]] += 1
        else:
            dict1[arr[i]] = 1
    #
    for elmt in brr:
        if elmt not in dict1:
            nums.append(elmt)
        else:
            dict1[elmt] -= 1
            if (dict1[elmt] < 0):
                nums.append(elmt)
        #
    #
    return sorted(nums)
