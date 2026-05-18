def isValid(s):
    if (len(s) == 1):
        return "YES"
    dict1 = {}
    n = len(s)
    for i in range(0, n):
        if s[i] in dict1:
            dict1[s[i]] += 1
        else:
            dict1[s[i]] = 1
    vals = list(dict1.values())
    vals = sorted(vals)
    i = 0
    m = len(vals)
    num1 = vals[0]
    num2 = vals[m - 1]
    if (vals.count(num1) == m):
        return "YES"
    else:
        if (vals.count(num2) == (m - 1)):
            return "YES"
        if (vals.count(num1) == (m - 1)):
            return "YES"
        return "NO"
