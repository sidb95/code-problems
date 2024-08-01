def countingSort(arr):
    nums = []
    answer = []
    n = len(arr)
    for i in range(0, 100):
        nums.append(0)
    for i in range(0, n):
        nums[arr[i]] += 1
    for i in range(0, 100):
        for j in range(0, nums[i]):
            answer.append(i)
    for i in range(0, len(answer) - 1):
        print(answer[i], end=" ")
    print(answer[n - 1])
    return
