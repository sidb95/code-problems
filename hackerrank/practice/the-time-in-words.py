def timeInWords(h, m):
    S1 = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"]
    S2 = []
    for i in range(0, 9):
        str1 = "twenty "
        str1 += S1[i]
        S2.append(str1)
    S1 += S2
    if (m == 0):
        return S1[h - 1] + " " + "o' clock"
    elif (m == 15):
        return ("quarter past ") + S1[h - 1]
    elif (m == 45):
        return ("quarter to " + S1[h % 12])
    elif (m == 30):
        return ("half past ") + S1[h - 1]
    elif (m < 30):
        return S1[m - 1] + " minutes past " + S1[h - 1]
    elif (m > 30):
        return S1[60 - m - 1] + " minutes to " + S1[h % 12]
