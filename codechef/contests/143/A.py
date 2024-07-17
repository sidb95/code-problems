class Solution:
  def __init__(self):
    pass
  
  def mainA1(self, X: int, Y: int) -> bool:
    if (X >= Y):
      return True
    else:
      return False


def __main__():
  X, Y = input().split()
  S1 = Solution()
  if (S1.mainA1(int(X), int(Y))):
    print("YES")
  else:
    print("NO")

__main__()
