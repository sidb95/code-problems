def decentNumber(n):
    str1 = ""
    answer = "-1"
    for i in range(0, n):
        str1 += "5"
    if ((n % 3) == 0):
        print(str1)
    else:
        m = n
        i = 1
        while ((m % 3) != 0):
            if (m >= 5):
                str1 = str1[:m - 5] + ("33333" * i)
                m -= 5
                i += 1
            else:
                if (m != 3):
                    answer = "-1"
                    break
            answer = str1
        print(answer)
