"""
n, str1 = ""
i = 0
FLAG = true
while FLAG: s1 = str1, count = 0, num1 = s[i], j = i, 
    while (j < n and s[j] == num1): j += 1, count += 1
    k = i
    if (count == 1): str1 += s[i], i = 0
    if s1 == str1: FLAG = false
"""

def superReducedString(s):
    n = len(s)
    str1 = ""
    i = 0
    FLAG = True
    while (FLAG):
        count = 0
        if (len(s) != 0):
            num1 = s[i]
        j = i
        #
        while ((j < len(s)) and (s[j] == num1)):
            j += 1
            count += 1
        #
        if (count % 2):
            str1 += s[i]
        i = j
        #
        if (i == len(s)):
            FLAG = False
            for k in range(1, len(str1)):
                if (str1[k] == str1[k - 1]):
                    i = 0
                    s = str1
                    str1 = ""
                    FLAG = True
                    break
            #
            #
        #
    if (len(str1)):
        return str1
    else:
        return "Empty String"
