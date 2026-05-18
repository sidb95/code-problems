def marsExploration(s):
    i = 0
    n = len(s)
    count = 0
    while (i < n):
        if (s[i] == 'S'):
            if (s[i + 1] == 'O'):
                if (s[i + 2] == 'S'):
                    pass
                else:
                    count += 1
            else:
                count += 1
                if (s[i + 2] == 'S'):
                    pass
                else:
                    count += 1
        else:
            count += 1
            if (s[i + 1] == 'O'):
                if (s[i + 2] == 'S'):
                    pass
                else:
                    count += 1
            else:
                count += 1
                if (s[i + 2] == 'S'):
                    pass
                else:
                    count += 1
        i += 3
    return count
