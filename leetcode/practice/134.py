<<<<<<< HEAD
# sidb95
# bhatoresiddharth@gmail.com
# 17 May 2026

class Solution:
  def canCompleteCircuit(gas: list[int], 
                         cost: list[int]) -> int:
    n = len(gas)
    for i in range(0, n):
      flag = False
      totalGas = gas[i]
      j = 0
      while (j != n):
        if (totalGas < cost[(i + j) % n]):
          flag = True
          break
        totalGas -= cost[(i + j) % n]
        j += 1
        totalGas += gas[(i + j) % n]
      #
      if (not flag):
        return i
      #
    #
    return -1

def __init__():
  gas = [1, 2, 3, 4, 5]
  cost = [3, 4, 5, 1, 2]
  print(Solution.canCompleteCircuit(gas, cost))
  gas = [2, 3, 4]
  cost = [3, 4, 3]
  print(Solution.canCompleteCircuit(gas, cost))

__init__()
=======
def canCompleteCircuit(gas, cost):
        answer = -1
        n = len(gas)
        num1 = 0
        num2 = 0
        for i in range(0, n):
            if (gas[i] > num1):
                num1 = gas[i]
                num2 = i
        for i in range(num2, n + num2):
            total_gas = 0
            for j in range(i % n, (i % n + n)):
                total_gas = total_gas + gas[j % n] - cost[j % n]
                if (total_gas < 0):
                    break
                #
            #
            if (total_gas >= 0):
                answer = i % n
                break
            #
        #
        return answer
>>>>>>> c672e95dee50bbb2fc21aab8b02e768f155dbbe5
