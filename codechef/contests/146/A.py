"""
sbhatore
07 August 2024

# Assumptions:
# 1. Every problem has a working solution,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3
# In:
# 1.
#
#
#
# Out:
# 1.
#
# rough-work:
- 
- 
- 
- 
# Solution:
#
#
#
# pseudocode:
#
#
#
#
"""

def calcAnswer():
    pass


def __main__():
    G, S, B = map(int, input().split())
    count = 0
    if (G < 5):
        count += 5 - G
    if (S < 5):
        count += 5 - S
    if (B < 5):
        count += 5 - B
    print(count)

__main__()
