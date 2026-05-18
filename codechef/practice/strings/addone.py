def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        n = len(s)
        str1 = ""
        carry = 1
        for i in range(n - 1, -1, -1):
            str1 += str((int(s[i]) + carry) % 10)
            carry = int((int(s[i]) + carry) / 10)
        if (carry != 0):
            str1 += str(carry)
        str1 = str1[::-1]
        print(str1)
    #
    return

__main__()
