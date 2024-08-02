def decimalConversion(s):
    answer = 0
    for i in range(0, 32):
        if (i >= len(s)):
            answer += (2 ** i)
        else:
            answer += (2 ** i) * (ord(s[i]) - ord('0'))
    return answer

def flippingBits(n):
    if (n == 0):
        return 1
    str1 = ""
    while (n > 0):
        a = (n % 2)
        n /= 2
        if (a == 0):
            str1 += "1"
        else:
            str1 += "0"
    return decimalConversion(str1)
