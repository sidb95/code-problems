class Solution:
  pass

def __main__():
  T = int(input())
  for t in range(0, T):
    n, k = map(int, input().split())
    if (k <= ((n * n) - ((2 * n) - 1))):
      print(0)
    else:
      print(k - ((n * n) - ((2 * n) - 1)))

__main__()
