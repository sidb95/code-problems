class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int: # type: ignore
        n = len(gas)
        itr1 = 0
        while (itr1 <= n - 1):
            num1 = gas[itr1]
            itr2 = itr1
            j = 0
            FLAG = True
            while (j < n):
                k = (itr2 + j) % n
                j += 1
                num1 -= cost[k]
                if (num1 < 0):
                    FLAG = False
                    break
                #
                num1 += gas[(k + 1) % n]
            #
            if (FLAG):
                return itr1
            #
            itr1 += 1
        #
        return -1
