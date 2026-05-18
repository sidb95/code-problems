def maxNoOnes(arr, M):
  if (M == 0)
    return noFunc(arr)
  itr = 0
  ptr = 0
  n = len(arr)
  answer = 0
  #
  while (itr < n and ptr < n):
    count = 0
    prevZero = 0
    while (itr < n and arr[itr] != 0):
      itr += 1
    if (itr == n):
      break
    else:
      prevZero = itr
      #
      arr[prevZero] = 1
      #
      count = 1
      #
      while (count != M):
        # flip all M - 1 zeroes 
        ptr = itr + 1
        while (ptr < n and arr[ptr] != 0):
          ptr += 1
        if (ptr == n)
          break
        else:
          arr[ptr] = 1
        count += 1
      answer = max(answer, noFunc(arr))
  return answer