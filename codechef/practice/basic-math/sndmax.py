"""
sidb95
07 August 2024
"""

def __main__():
    T = int(input())
    for t in range(0, T):
        a, b, c = map(int, input().split())
        nums = [a, b, c]
        nums = sorted(nums)
        print(nums[1])
    #
    return

__main__()
