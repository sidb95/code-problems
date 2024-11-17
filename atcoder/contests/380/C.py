# 16 Nov 2024

def __main__():
    n, k = map(int, input().split())
    s = input()
    itr1 = 0
    i1 = -1
    num1 = 0
    i2 = -1
    num2 = 0
    count = 0
    if (s[itr1] == '1'):
        if ((k - 1) == 1):
            i1 = 0
        #
        count = 1
    #
    while (s[itr1] == '1'):
        itr1 += 1
        if (k - 1 == 1):
            num1 += 1
        #
    #
    while ((itr1 < n) and (count < k)):
        while (s[itr1] == '0'):
            itr1 += 1
        #
        count += 1
        if (count == k - 1):
            i1 = itr1
        #
        if (count == k):
            i2 = itr1
        #
        while ((itr1 < n) and s[itr1] == '1'):
            itr1 += 1
            if (count == (k - 1)):
                num1 += 1
            #
            if (count == (k)):
                num2 += 1
            #
        #
    #
    s = s[:i1 + num1] + s[i2:i2 + num2] + s[i1 + num1:i2] + s[i2 + num2:]
    print(s)


__main__()
