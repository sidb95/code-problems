# sidb95
# pyth41
# bhatoresiddharth@gmail.com
# 09 May 2024

class Solution:
  def __init__(self, txt="Programming"):
    self.txt = txt
    return

  def printAnswer(self):
    print(self.txt[2], "\n", self.txt[1], "\n")
    return

def __main__():
  mySol = Solution("Programming")
  mySol.printAnswer()
  return

__main__()