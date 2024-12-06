# sbhatore

"""
Pseudocode:

1. Take even numbered indices and check if balancing them could lead
to all the elements being equal,
- (1) (2) (3)
- (1) (2) (3) (4)
2. Do the same with odd numbered indices. 
"""

def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        sum1 = 0
        sum2 = 0
        count1 = 0
        count2 = 0
        for i in range(0, n, 2):
            sum1 += a[i]
            count1 += 1
        num1 = sum1 / count1
        for i in range(1, n, 2):
            sum2 += a[i]
            count2 += 1
        num2 = sum2 / count2
        if (int(num1) != num1):
            print("NO")
        elif (int(num2) != num2):
            print("NO")
        elif (num1 != num2):
            print("NO")
        elif (num1 == num2):
            print("YES")
        #
    #
    return

__main__()
