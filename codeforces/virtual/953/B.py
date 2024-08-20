"""
sbhatore
20 August 2024

# Assumptions:
#
#
#
# In:
# 1. n, a, b
#
#
#
# Out:
# 1. max profit
#
#
rough-work
b + b - 1 + b - 2 + b - 3, b_i >= a
b + (b - 1) + (b - 2) + (b - n + 1)
sum(b_i, a < b + 1 - i <= b)
b - a
4 4 5

# Solution:
# 1. For the first k buns, sell at b_i
# 2. Rest of the buns to be sold at a
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n, a, b = map(int, input().split())
        if (n == 1):
            print(max(a, b))
        else:
            num1 = 0
            count = 0
            if (b > n):
                if (b > a):
                    if (n > (b - a)):
                        num1 = int(b * (b - a) - ((b - a - 1) * (b - a)) / 2)
                        num1 += (n - (b - a)) * a
                    else:
                        num1 = int(b * (n) - ((n - 1) * (n)) / 2)
                else:
                    num1 += a * n
            else:
                k = b
                if (b > a):
                    if (k > (b - a)):
                        num1 = int(b * (b - a) - (((b - a) - 1) * (b - a)) / 2)
                        num1 += (n - (b - a)) * a
                    else:
                        num1 += int(b * k - ((k - 1) * (k)) / 2)
                        num1 += a * (n - k)
                else:
                    num1 = n * a
            print(num1)
        #
    #
    return


__main__()
