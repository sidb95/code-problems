def makingAnagrams(s1, s2):
    dict1 = {}
    dict2 = {}
    count = 0
    for elmt in s1:
        if elmt in dict1:
            dict1[elmt] += 1
        else:
            dict1[elmt] = 1
    for elmt in s2:
        if elmt in dict2:
            dict2[elmt] += 1
        else:
            dict2[elmt] = 1
    for key in dict1:
        if key in dict2:
            count += abs(dict1[key] - dict2[key])
        else:
            count += dict1[key]
    for key in dict2:
        if key not in dict1:
            count += dict2[key]
    return count
