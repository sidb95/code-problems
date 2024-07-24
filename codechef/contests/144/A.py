class Solution:
    pass

def __main__():
    X, Y = map(int, input().split())
    if (X == Y):
        print("SAME")
    elif (Y > X):
        print("INCREASED")
    else:
        print("DECREASED")

__main__()
