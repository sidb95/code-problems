# sidb95
# bhatoresiddharth@gmail.com
# pyth38
# 08 May 2024

class Solution:
  def __init__(self, a="", b="", c=" ", retVar=""):
    retVar = a + c + b;
    self.retVar = retVar

  def printAnswer(self):
  	print(self.retVar)

def __main__():
  mySol = Solution("Hello", "World", " ", "")
  mySol.printAnswer()
  return

__main__()