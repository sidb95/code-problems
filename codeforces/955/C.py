def __main__():
  t = input()
  T = int(t)
  for y in range(0, T):
    n, l, r = input().split()
    n = int(n)
    arr = []
    nums = []
    arr = list(input().split())
    for elmt in arr:
      nums.append(int(elmt))
    l = int(l)
    r = int(r)
    count = 0
    answer = 0
    #
    for i in range(0, n):
      count += nums[i]
      if (count > r):
        count = nums[i]
      if (count >= l and count <= r):
        answer += 1
        count = 0
    print(answer)

__main__()
