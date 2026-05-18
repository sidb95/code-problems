"""
sea_level = 0
if 'U': sea_level += 1
if 'D': sea_level -= 1
if 'U' and sea_level == 0: count += 1
"""

def countingValleys(steps, path):
    seaLevel = 0
    count = 0
    for elmt in path:
        if (elmt == 'U'):
            seaLevel += 1
            if (seaLevel == 0):
                count += 1
        else:
            seaLevel -= 1
    return count
