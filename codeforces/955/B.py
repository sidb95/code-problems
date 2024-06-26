def myFunc(x, y):
  while ((x % y) == 0):
    x = (x) / (y)
  return x

def __main__():
  t = input()
  T = int(t)
  for l in range(0, T):
    x, y, k = input().split()
    x = int(x)
    y = int(y)
    k = int(k)
    vis = []
    i = y
    while (i < x):
      vis.insert(i)
      i += y
    for i in range(0, k):
      x += 1
      if (x in vis):
        x = myFunc(x, y)
      elif ((x % y) == 0):
        x = myFunc(x, y)
      else:
        prevX = x
        currX = ((int(x / y) + 1) * y) - 1
        if (x + (k - i - 1) < currX):
          x += (k - i - 1)
          break
        i = x - prevX - 1
    print(int(x))

__main__()
