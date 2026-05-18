def kangarooAux(x1, v1, x2, v2, p):
    propn1 = True
    #
    if (v1 > v2):
        propn1 = False
    else:
        q = 0
        num1 = 0
        while ((x1 + (num1 + q) * v1) > (x2 + (num1 + q) * v2)):
            p += 1
            q = 2 ** (p - 1)
            if ((x1 + (num1 + q) * v1) < (x2 + (num1 + q) * v2)):
                num1 = ((num1 + q / 2))
                p = 0
                q = 0
        r = num1;
        while ((x1 + r * v1) > (x2 + r * v2)):
            r += 1
        if ((x1 + r * v1) == (x2 + r * v2)):
            propn1 = True
        else:
            propn1 = False
    #
    return propn1

def kangaroo(x1, v1, x2, v2):
    p = 0
    propn1 = True
    if (x1 > x2):
        propn1 = kangarooAux(x1, v1, x2, v2, p)
    else:
        propn1 = kangarooAux(x2, v2, x1, v1, p)
    if (propn1):
        return "YES"
    else:
        return "NO"
