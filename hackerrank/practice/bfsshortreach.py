def bfs(n, m, edges, s):
    Q = Queue()
    Q.insert((s, 0))
    arr = {}
    vis = []
    answer = []
    for i in range(1, n + 1):
        arr[i] = -1
    while (not Q.empty()):
        num1 = Q.front()
        if (num1[1] != 0):
            arr[num1[0]] = num1[1]
        for edge in edges:
            if (edge[0] not in vis):
                if (edge[0] == num1[0]):
                    Q.insert((edge[1], num1[1] + 6))
                #
            #
        #
        vis.append(num1[0])
        Q.remove()
        #
    #
    for key in sorted(list(arr.keys())):
        answer.append(arr[key])
    return answer[1:]
