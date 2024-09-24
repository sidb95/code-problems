class Solution:
    def addBinary(self, a: str, b: str) -> str:
        s = ""
        n = len(a)
        m = len(b)
        itr1 = n - 1
        itr2 = m - 1
        carry = 0
        while ((itr1 >= 0 and (itr2 >= 0))):
            num1 = ((ord(a[itr1]) - ord('0') + (ord(b[itr2]) - ord('0'))) + carry)
            num2 = (num1 % 2)
            carry = int(num1 / 2)
            s = str(num2) + s
            itr1 -= 1
            itr2 -= 1
        #
        if (itr1 < 0):
            while (itr2 >= 0):
                num1 = ((ord(b[itr2]) - ord('0')) + carry)
                num2 = (num1 % 2)
                carry = int(num1 / 2)
                s = str(num2) + s
                itr2 -= 1
            #
        #
        if (itr2 < 0):
            while (itr1 >= 0):
                num1 = ((ord(a[itr1]) - ord('0')) + carry)
                num2 = (num1 % 2)
                carry = int(num1 / 2)
                s = str(num2) + s
                itr1 -= 1
            #
        #
        if (carry):
            s = str(carry) + s
        #
        return s