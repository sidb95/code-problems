def inBounds(nums, i, j, m, n, vis):
    if ((i < m) and (j < n) and (i >= 0) and (j >= 0)):
        if (nums[i][j] == 'X' and ((i, j) not in vis)):
            return True
    else:
        return False

def dfs(nums, m, n, i, j, vis):
    if ((i, j) in vis):
        return vis
    else:
        vis.append((i, j))
    if (inBounds(nums, i + 1, j, m, n, vis)):
        vis = dfs(nums, m, n, i + 1, j, vis)
    if (inBounds(nums, i - 1, j, m, n, vis)):
        vis = dfs(nums, m, n, i - 1, j, vis)
    if (inBounds(nums, i, j + 1, m, n, vis)):
        vis = dfs(nums, m, n, i, j + 1, vis)
    if (inBounds(nums, i, j - 1, m, n, vis)):
        vis = dfs(nums, m, n, i, j - 1, vis)
    return vis

def calcAnswer(nums, m, n, vis):
    count = 0
    for l1 in range(0, m):
        for l2 in range(0, n):
            if ((l1, l2) not in vis):
                if (nums[l1][l2] != '.'):
                    vis = dfs(nums, m, n, l1, l2, vis)
                    count += 1
    print(count)
    return (count == 3, vis)

def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        s1 = input()
        s2 = input()
        nums = []
        nums.append(s1)
        nums.append(s2)
        m = 2
        answer = 0
        vis = []
        #
        for i in range(0, m):
            for j in range(0, n):
                if (nums[i][j] != 'X'):
                    if ((i, j) not in vis):
                        #
                        arr = []
                        for l1 in range(0, m):
                            A = []
                            for l2 in range(0, n):
                                if ((l1 == i) and (l2 == j)):
                                    A.append('X')
                                else:
                                    A.append(nums[i][j])
                            arr.append(A)
                    #
                    v1 = calcAnswer(arr, m, n, vis)
                    vis = v1[1]
                    if (v1[0]):
                        answer += 1
        print(answer)
    return

__main__()
