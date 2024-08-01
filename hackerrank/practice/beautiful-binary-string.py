"""
1. if single 010, step += 1
2. if multiple 010, step += count - 1
"""

def beautifulBinaryString(b):
    count = 0
    n = len(b)
    i = 0
    #
    while (i < n):
        s1 = "010"
        #
        while (i < n):
            count1 = 0
            FLAG = False
            while ((i + 2 < n) and (b[i:i+3] == s1)):
                FLAG = True
                i += 2
                count += 1
                count1 += 1
            if (count1 > 1):
                count -= 1
            if (not FLAG):
                i += 1
                #
            #
        #
    #
    return count
