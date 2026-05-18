def workbook(n, k, arr):
    count = 0
    nums = []
    pno = 0
    #
    for i in range(0, n):
        no1 = int(arr[i] / k) # no of pages
        no2 = (arr[i] % k)
        #
        num1 = 1
        #
        for j in range(0, no1):
            pno += 1
            nums = []
            for l1 in range(0, k):
                nums.append(num1)
                num1 += 1
            if pno in nums:
                count += 1
        #
        if (no2 != 0):
            pno += 1
            nums = []
            #
            for j in range(0, no2):
                nums.append(num1)
                num1 += 1
            #
            if pno in nums:
                count += 1
    return count
