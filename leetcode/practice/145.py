def trap(h, n):
    arr = []
    for i in range(0, n):
        arr.append([i, h[i]])
    arr.sort(key = lambda sublist:sublist[1])
    arr = arr[::-1]
    #
    mid = arr[0]
    left = []
    right = []
    index_mid = arr[0][0]
    for i in range(1, n):
        if ((arr[i][0] < index_mid) and (arr[i][0] < mid[0])):
            left.append(arr[i])
            mid = arr[i]
        #
    #
    mid = arr[0]
    for i in range(1, n):
        if ((arr[i][0] > index_mid) and (arr[i][0] > mid[0])):
            right.append(arr[i])
            mid = arr[i]
        #
    #
    A = [0]
    A[0] += h[0]
    for i in range(1, n):
        A.append(A[i - 1] + h[i])
    #
    count = 0
    #
    p = len(left)
    q = len(right)
    mid = arr[0]    
    for i in range(0, p):
        count += (left[i][1]) * (mid[0] - left[i][0] - 1) - (A[mid[0]] - A[left[i][0]] - mid[1])
        mid = left[i]
    #
    mid = arr[0]
    for i in range(0, q):
        count += (right[i][1]) * (-mid[0] + right[i][0] - 1) - (-A[mid[0]] + A[right[i][0]] - right[i][1])
        mid = right[i]
    #
    print(count)

def __main__():
    h = [4, 2, 0, 3, 2, 5]
    trap(h, len(h))

__main__()
