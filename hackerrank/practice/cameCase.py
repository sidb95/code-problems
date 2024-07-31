def camelcase(s):
    count = 1
    n = len(s)
    i = 0
    while ((i < n) and (not ((ord(s[i]) >= ord('A')) and ord(s[i]) <= ord('Z')))):
        i += 1
    if (i == n):
        return count
    else:
        while (i < n):
            if ((ord(s[i]) >= ord('A')) and (ord(s[i]) <= ord('Z'))):
                count += 1
            i += 1
        return count
