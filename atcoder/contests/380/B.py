# 16 Nov 2024

def __main__():
    s = input()
    n = len(s)
    itr1 = 1
    a = []
    while (itr1 < n):
        num1 = 0
        while ((itr1 < n) and (s[itr1] != "|")):
            itr1 += 1
            num1 += 1
        #
        a.append(num1)
        if (itr1 == (n - 1)):
            break
        itr1 += 1
    #
    for elmt in a:
        print(elmt, end=" ")
    print("")

__main__()
