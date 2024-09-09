"""
coin-change.py
sidb95
bhatoresiddharth@gmail.com
09 Sep 2024
"""

def getWays(n, c):
    S = {}
    S[0] = []
    vis = []
    for i in range(0, n + 1):
        S[0].append(0)
    vis.append(0)
    c = sorted(c)
    for elmt in c:
        S[elmt] = [1]
        for i in range(1, n + 1):
            if (i < elmt):
                S[elmt].append(S[vis[len(vis) - 1]][i])
            else:
                S[elmt].append(S[vis[len(vis) - 1]][i] + S[elmt][i - elmt])
            #
        #
        vis.append(elmt)
