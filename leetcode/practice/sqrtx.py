class Solution:
    def mySqrt(self, x: int) -> int:
        if (x == 0):
            return 0
        num1 = 2
        while ((num1 * num1) < x):
            num1 *= 2
        num2 = int(num1 / 2)
        start = num2
        end = num1
        while (start <= end):
            mid = int((end - start) / 2) + start
            if ((mid + 1) <= num1):
                if ((mid * mid) <= x and ((mid + 1) * (mid + 1)) > x):
                    return mid
            if ((mid - 1) >= num2):
                if (((mid - 1) * (mid - 1) <= x) and ((mid * mid) > x)):
                    return (mid - 1)
            if ((mid * mid) > x):
                end = mid
            elif ((mid * mid) == x):
                return mid
            else:
                start = mid + 1
            #
        #
        return 0
