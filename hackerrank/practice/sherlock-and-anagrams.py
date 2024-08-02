def sherlockAndAnagrams(s):
    nums = []
    n = len(s)
    count = 0
    for i in range(0, n):
        for j in range(i + 1, n + 1):
            s1 = s[i:j]
            nums.append(sorted(s1))
    nums = sorted(nums)
    m = len(nums)
    i = 0
    while (i < m):
        s1 = nums[i]
        count1 = 0
        j = i
        while ((j < m) and (nums[j] == s1)):
            count1 += 1
            j += 1
        count += int((count1 * (count1 - 1)) / 2)
        i = j
    return count
