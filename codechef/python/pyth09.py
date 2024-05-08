# pyth09
# sidb95
# 04 May 2024

class Solution:
  def __init__(self, a, b):
    self.a = a
    self.b = b

  def perimeter(self):
    return 2 * (self.a + self.b)
  
  def area(self):
    return (self.a * self.b)
  
  def printFunc(self, c="\n"):
    print(Solution.area(self))
    print(c)
    print(Solution.perimeter(self))\

def __main__():
  mySol = Solution(11, 13)
  mySol.printFunc()

__main__()