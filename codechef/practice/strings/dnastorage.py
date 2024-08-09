def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        s = input()
        str1 = ""
        for i in range(0, n - 1, 2):
            s1 = str(s[i]) + str(s[i + 1])
            if (s1 == "00"):
                str1 += "A"
            elif (s1 == "01"):
                str1 += "T"
            elif (s1 == "10"):
                str1 += "C"
            else:
                str1 += "G"
        print(str1)
    #
    return

__main__()
