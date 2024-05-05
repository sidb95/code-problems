class Solution:
  def __init__(self, tup1=(), tup2=()):
    self.varA = tup1
    self.varB = tup2

  def printThis(self, c=' '):
    print(self.varA[0] + self.varA[1], self.varB[0] + self.varB[1])

def __main__():
  a = 21
  b = 40
  mySol = Solution((3, 4), (2, 1))
  mySol.printThis()

__main__()