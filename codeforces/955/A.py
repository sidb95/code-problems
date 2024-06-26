def __main__():
  T = input()
  t = int(T)
  for l in range(0, t):
    x1, y1 = input().split()
    x2, y2 = input().split()
    x1 = int(x1)
    y1 = int(y1)
    x2 = int(x2)
    y2 = int(y2)
    if (canTie(x1, y1, x2, y2)):
      print("NO")
    else:
      print("YES")

def canTie(x1: int, y1: int, x2: int, y2: int) -> bool:
  if (x1 > y1):
    if (y2 > x2):
      return True
  elif (x1 < y1):
    if (x2 > y2):
      return True
  return False

__main__()
