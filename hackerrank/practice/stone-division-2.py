B = {}

def stoneDivision(n, s):
    if n in B:
        return B[n]
    if (len(s) == 0):
        return 1
    elif (len(s) == 1):
        return int(n / s[0])
    me = max(s)
    A = []
    for i in range(0, len(s)):
        if (me % s[i] == 0):
            A.append(s[i])
    B[n] = (int(n / me) + stoneDivision(me, A))
    return B[n]
