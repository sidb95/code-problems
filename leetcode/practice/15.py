def threeSum(nums):
    n = len(nums)
    nums = sorted(nums)
    a = []
    S = {}
    R = {}
    vis = {}
    if (nums[0] > 0 or nums[n - 1] < 0):
        return []
    #
    j = -1
    TEMP = False
    for i in range(0, n):
        if (nums[i] >= 0 and (not TEMP)):
            j = i
            TEMP = True
        if (nums[i] < 0):
            R[nums[i]] = i
        else:
            S[nums[i]] = i
        #
    #
    FLAG = True
    itr1 = j - 1
    while (itr1 > 0):
        itr2 = itr1 - 1
        while (itr2 >= 0):
            num1 = -(nums[itr1] + nums[itr2])
            if ((num1 in S)):
                A = sorted([num1, nums[itr1], nums[itr2]])
                if A not in a:
                    a.append(A)
                #
            #
            itr2 -= 1
        #
        itr1 -= 1
    #
    itr1 = j
    FLAG = True
    while (itr1 < n - 1):
        itr2 = itr1 + 1
        while (itr2 < n):
            num1 = -(nums[itr1] + nums[itr2])
            if (num1 in R):
                A = sorted([num1, nums[itr1], nums[itr2]])
                if A not in a:
                    a.append(A)
                #
            #
            itr2 += 1
        #
        itr1 += 1
    #
    if (nums.count(0) >= 3):
        a.append([0, 0, 0])
    return a

def __main__():
    a = list(map(int, input().split()))
    print(threeSum(a))

__main__()
