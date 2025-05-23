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
