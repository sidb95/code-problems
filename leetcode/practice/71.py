def simplifyPath(path):
    s = path
    a = []
    n = len(s)
    i = 0
    r = ""
    while (i < n):
        while ((i < n) and (s[i] == '/')):
            i += 1
        #
        t = ""
        while ((i < n) and (s[i] != '/')):
            t += s[i]
            i += 1
        #
        m = len(t)
        x = t.count('.')
        if (x == m):
            if (len(a) == 0):
                if (m < 3):
                    pass
                else:
                    a.append(t)
            else:
                for j in range(0, m - 1):
                    a.pop(len(a) - 1)
                #
            #
        else:
            if (t != ""):
                a.append(t)
            #
        #
    #
    for i in range(0, len(a)):
        r += "/" + a[i]
    if (r == ""):
        r += "/"
    return r

def __main__():
    s = input()
    print(simplifyPath(s))

__main__()
