class Print:
    def __init__(self):
        pass

    def printCharacter(c):
        print(c, end="")
    
    def printString(s):
        print(s)
    
    def lengthString(s):
        return len(s)

def calcAnswer():
    pass

def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        n = len(s)
        str1 = ""
        FLAG = False
        #
        for i in range(1, n):
            if (s[i] == s[i - 1]):
                c = ''
                if (s[i] == 'z'):
                    c = 'x'
                else:
                    c = chr(ord(s[i]) + 1)
                str1 = s[:i] + c + s[i:]
                FLAG = True
                break
        if (not FLAG):
            if (s[0] == 'a'):
                str1 += "b"
                str1 += s
            else:
                str1 += "a"
                str1 += s
        print(str1)
    return

__main__()
