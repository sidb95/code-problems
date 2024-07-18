class Print:
  def __init__(self):
    pass
  
  def printString(self, s: str) -> None:
    print(s)
    return None
  
  def printCharacter(self, c: chr) -> None:
    print(c, end = "")
    return None

  def lengthString(self, s: str) -> None:
    return len(s)
  

class Solution:
  def __init__(self):
    pass
  
  def mainA1(self, A, n, m):
    if (n == 1 and m == 1):
      return -1
    else:
      #
      for i in range(0, n):
        #
        A[i].reverse()
      #
      mid1 = int(m / 2)
      #
      if ((m % 2) == 1):
        i = 0
        j = n - 1
        #
        while (i < j):
          TEMP = A[i][mid1]
          A[i][mid1] = A[j][mid1]
          A[j][mid1] = TEMP
          i += 1
          j -= 1
      #
      if (m == 1):
        A.reverse()
      elif ((n % 2) == 1):
        mid2 = int(n / 2)
        TEMP = A[mid2][mid1]
        A[mid2][mid1] = A[0][0]
        A[0][0] = TEMP
    return A
  
def __main__():
  T = input()
  T = int(T)
  for t in range(0, T):
    n, m = input().split()
    n = int(n)
    m = int(m)
    A = []
    for i in range(0, n):
      arr = list(input().split())
      for j in range(0, len(arr)):
        arr[j] = int(arr[j])
      A.append(arr)
    S = Solution()
    A = S.mainA1(A, n, m)
    P = Print()
    if (A == -1):
      P.printString("-1")
    else:
      for i in range(0, n):
        for j in range(0, m):
          P.printCharacter(A[i][j])
          if (j != (m - 1)):
            P.printCharacter(' ')
          else:
            P.printCharacter("\n")
  return


__main__()
