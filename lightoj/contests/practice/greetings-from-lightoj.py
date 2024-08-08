"""
greetings-from-lightoj.py
sidb95
08 August 2024
"""

def __main__():
    T = int(input())
    for t in range(0, T):
        a, b = map(int, input().split())
        print("Case", t + ":", (a + b))
    #
    return

__main__()
