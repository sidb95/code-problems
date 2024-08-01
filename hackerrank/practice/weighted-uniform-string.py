def weightedUniformStrings(s, queries):
    answer = []
    nums = {}
    n = len(s)
    for i in range(0, n):
        count = 0
        c = s[i]
        while ((i < n) and (s[i] == c)):
            count += 1
            i += 1
        v1 = (ord(c) - ord('a') + 1)
        v2 = v1 * count
        if v1 in nums:
            if (v2 > nums[v1]):
                nums[v1] = v2
        else:
            nums[v1] = v2
    for q in queries:
        FLAG = False
        for i in range(1, 27):
            if ((q) % i == 0):
                if i in nums:
                    if (q <= nums[i]):
                        FLAG = True
                        answer.append("Yes")
                        break
        if (not FLAG):
            answer.append("No")
    return answer
