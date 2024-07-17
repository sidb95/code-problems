class Solution:
  def __init__(self):
    self.count = 0

  def mainD1AuxA1(self):
    return ((self.count % 2) == 0)

  def mainD1Aux2(self, S1, S2, N, K):
    if (self.count <= (K / 2)):
      self.mainD1AuxA1(self)
    else:
      return False

  def mainD1Aux(self, S1, S2, N):
    no1 = 0
    no2 = 0
    for i in range(0, N):
      if (S1[i] == 1):
        no1 += 1
      if (S2[i] == 1):
        no2 += 1
      if (S1[i] != S2[i]):
        self.count += 1
    return (no1 == no2)

  def mainD1(self, S1, S2, N, K):
    if (self.mainD1Aux(S1, S2, N)):
      self.mainD1Aux2(S1, S2, N, K)
    else:
      return False


def __main__():
  T = input()
  T = int(T)
  for t in range(0, T):
    N, K = input().split()
    N = int(N)
    K = int(K)
    S1 = list(input().split())
    S2 = list(input().split())
    #
    for i in range(0, N):
      S1[i] = int(S1[i])
      S2[i] = int(S2[i])
    S = Solution()
    if (S.mainD1(tuple(S1), tuple(S2), N, K)):
      print("YES")
    else:
      print("NO")

__main__()
