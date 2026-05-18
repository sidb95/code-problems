"""
[i..j]
reverseDigits
digitize
calcDigits
"""

def calcDigits(arr):
    n = len(arr)
    sum1 = 0
    num1 = 1
    for i in range(0, n):
        sum1 += ((num1) * arr[i])
        num1 *= 10
    return sum1

def reverseDigits(arr):
    arr.reverse()
    return arr

def digitize(n):
    nums = []
    while (n != 0):
        nums.append(n % 10)
        n /= 10
    return nums

def beautifulDays(i, j, k):
    count = 0
    for h in range(i, j + 1):
        if ((calcDigits(reverseDigits(digitize(h))) % k) == 0):
            count += 1
    return count
