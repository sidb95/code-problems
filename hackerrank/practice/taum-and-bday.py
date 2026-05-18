"""
TLE
cost = ((b * bc) + w * wc)
for i in range(0, b):
    cost -= bc
    cost += wc
    cost += 1
    minVal = min(minVal, cost)
same for loop in case of (0, w) 
"""

def taumBday(b, w, bc, wc, z):
    cost = ((b * bc) + (w * wc))
    TEMP = cost
    minVal = cost
    #
    for i in range(0, b):
        cost -= bc
        cost += wc
        cost += z
        minVal = min(minVal, cost)
    #
    cost = TEMP
    for i in range(0, w):
        cost -= wc
        cost += bc
        cost += z
        minVal = min(minVal, cost)
    #
    return minVal
