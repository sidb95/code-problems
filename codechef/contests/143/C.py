class Solution:
  def __init__(self):
    pass
  
  def mainB1(self, N: int):
    if (N == 1):
      A = [1]
      return A
    else:
      A = [2, 1]
      for i in range(0, N - 2):
        A.append(1)
    return A

class __main__():
  T = input()
  T = int(T)
  for t in range(0, T):
    N = input()
    N = int(N)
    S1 = Solution()
    A = S1.mainB1(N)
    if (len(A) == 1):
      print(1)
    else:
      print(2)
    for i in range(0, len(A) - 1):
      print(A[i], end = " ")
    print(A[len(A) - 1])    


__main__()
