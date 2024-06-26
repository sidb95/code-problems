def gridChallenge(grid):
  m = len(grid)
  n = len(grid[0])
  for i in range(0, m):
    row = ""
    for j in range(0, n):
      row += grid[i][j]
    row.sort()
    for j in range(0, n):
      grid[i][j] = row[j]
  #
  FLAG = False
  #
  for j in range(0, n):
    col = ""
    for i in range(0, m):
      col += grid[i][j]
    colA = col
    colA.sort()
    if (col != colA):
      FLAG = True
      break
  if (FLAG):
    return "NO"
  else:
    return "YES"
