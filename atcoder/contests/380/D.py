# 16 Nov 2024

def __main__():
    s = input()
    n = len(s)
    q = int(input())
    a = list(map(int, input().split()))
    for i in range(0, q):
        num1 = (a[i] - 1) % (2 * n)
        if (num1 < n):
            c = s[num1]
            print(c, end=" ")
        else:
            c = s[num1 - n]
            if (ord(c) >= ord('a') and ord(c) <= ord('z')):
                c = str(c).capitalize()
            else:
                c = str(c).lower()
            print(c, end=" ")
        #
    #
    print("")
    return

__main__()
