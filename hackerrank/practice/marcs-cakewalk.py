def marcsCakewalk(calorie):
    calorie = sorted(calorie)
    sum1 = 0
    for i in range(n - 1, -1, -1):
        sum1 += (2 ** (n - 1 - i)) * calorie[i]
    return sum1
