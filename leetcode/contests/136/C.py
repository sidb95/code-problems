"""
the-number-of-winning-players
# sidb95
# 03 August 2024
# 
# Assumptions:
# 1. multiple players
# 2. 
# In:
#
# Out:
#
# Summary:
# 1. dictionary of players corresponding to picked balls dictionary
#
# pseudocode:
# 1. dictP
# 2. dictB_i
# 
"""

def calcAnswer(n, pick):
    dictP = {}
    count = 0
    for elmt in pick:
        if (elmt[0] in dictP):
            if (elmt[1] in dictP[elmt[0]]):
                dictP[elmt[0]][elmt[1]] += 1
            else:
                dictP[elmt[0]][elmt[1]] = 1
        else:
            dictP[elmt[0]] = {}
            dictP[elmt[0]][elmt[1]] = 1
    for p in dictP.keys():
        v1 = max(list(dictP[p].values()))
        if (v1 > p):
            count += 1
    return count




def __main__():
    pass

__main__()
