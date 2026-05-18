def intToRoman(num):
	if (num <= 0):
		return ""
	if (num >= 1000):
		return "M" + intToRoman(num - 1000)
	elif (num >= 900):
		return "CM" + intToRoman(num - 900)
	elif (num >= 500 and num < 900):
		return "D" + intToRoman(num - 500)
	elif (num >= 400):
		return "CD" + intToRoman(num - 400)
	elif (num >= 100):
		return "C" + intToRoman(num - 100)
	elif (num >= 90):
		return "XC" + intToRoman(num - 90)
	elif (num >= 50):
		return "L" + intToRoman(num - 50)
	elif (num >= 40):
		return "XL" + intToRoman(num - 40)
	elif (num >= 10):
		return "X" + intToRoman(num - 10)
	elif (num >= 9):
		return "IX"
	elif (num >= 5):
		return "V" + intToRoman(num - 5)
	elif (num >= 4):
		return "IV"
	else:
		return "I" + intToRoman(num - 1)

def __main__():
	arr = [3749, 58, 1994]
	for elmt in arr:
	    print(intToRoman(elmt))

__main__()
