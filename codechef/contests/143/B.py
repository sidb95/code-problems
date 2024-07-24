class Solution:
  def __init__(self):
    pass
  
  def mainB1(self, N: int, X: int) -> int:
    sum = 0
    for i in range(N, N - X, -1):
      sum += pow(2, i)
    for i in range(N - X, 0, -1):
      sum -= pow(2, i)
    return sum


def __main__():
  T = input()
  T = int(T)
  for t in range(0, T):
    N, X = input().split()
    N = int(N)
    X = int(X)
    S1 = Solution()
    print(S1.mainB1(N, X))


__main__()
