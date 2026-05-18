def jump(nums):
	n = len(nums)
	if (n <= 1):
		return 0
	i = 0
	j = nums[i]
	count = 1
	while ((i < (n - 1)) and (j < (n - 1))):
		num1 = 0
		l = -1
		for k in range(i, j + 1):
			if (num1 >= n - 1):
				return count + 1
			else:
				if (num1 < k + nums[k]):
					num1 = k + nums[k]
					l = k
				#
			#
		#
		i = l
		j = num1
		count += 1
	#
	return count

def __main__():
    print(jump([2, 1, 1, 3, 1, 2, 4]))
	
__main__()
