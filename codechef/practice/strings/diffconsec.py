def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        s = input()
        str1 = ""
        str2 = ""
        for i in range(0, n):
            if ((i % 2) == 0):
                str1 += "0"
                str2 += "1"
            else:
                str1 += "1"
                str2 += "0"
        count1 = 0
        count2 = 0
        for i in range(0, n):
            if (s[i] != str1[i]):
                count1 += 1
            if (s[i] != str2[i]):
                count2 += 1
        print(min(count1, count2))
    #
    return

__main__()
