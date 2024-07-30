"""
in: length of sticks, arr_i
out: final when arr_is are equal

"""

def cutTheSticks(arr):
    arr = sorted(arr)
    i = 0
    n = len(arr)
    nums = [n]
    sum1 = n
    while (sum1 > 0):
        l1 = arr[i]
        count = 0
        while ((i < n) and (arr[i] == l1)):
            i += 1
            count += 1
        j = i
        sum1 -= count
        if (sum1 > 0):
            nums.append(sum1)
        if (j < n):
            while ((j < n)):
                arr[j] -= l1
                j += 1
    return nums
