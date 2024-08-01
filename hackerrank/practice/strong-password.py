numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"

def minimumNumber(n, password):
    count = 4
    i = 0
    FLAG = [True, True, True, True]
    while ((i < n) and count > 0):
        if (FLAG[0] and password[i] in numbers):
            count -= 1
            FLAG[0] = False
        if (FLAG[1] and password[i] in lower_case):
            count -= 1
            FLAG[1] = False
        if (FLAG[2] and password[i] in upper_case):
            count -= 1
            FLAG[2] = False
        if (FLAG[3] and password[i] in special_characters):
            count -= 1
            FLAG[3] = False
        i += 1
    if ((n >= 6) and (count == 0)):
        return 0
    elif (count == 0):
        return (6 - n)
    elif (n >= 6):
        return count
    elif ((n + count) >= 6):
        return (count)
    else:
        return (6 - n)
