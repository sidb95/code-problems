class Solution:
    class Tree:
        def __init__(self, val):
            self.left = None
            self.right = None
            self.val = val

    def timeTaken(self, edges: List[List[int]]) -> List[int]:
        n = len(edges)
        vis = []
        dict1 = {}
        r1 = Tree(0)
        times = []
        for i in range(0, n):
            if (edges[i][0] == 0):
                if 0 in vis:
                    r1.right = Tree(edges[i][1])
                else:
                    r1.left = Tree(edges[i][1])
                    dict1[edges[i][1]] = r1.left
                    vis.append(0)
                    dict1[0] = r1

            else:
                if edges[i][0] in vis:
                    dict1[edges[i][0]].right = Tree(edges[i][1])
                else:
                    dict1[edges[i][0]] = Tree(edges[i][0])
                    r = dict1[edges[i][0]]
                    r.left = Tree(edges[i][1])
                    dict1[edges[i][1]] = r.left
                    vis.append(edges[i][0])
                #
            #
        #
    #
#
