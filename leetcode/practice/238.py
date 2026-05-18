def productExceptSelf(nums):
	n = len(nums)
	left = []
	num1 = 1
	for i in range(0, n):
		num1 *= nums[i]
		left.append(num1)
	#
	right = []
	num1 = 1
	for j in range(n - 1, -1, -1):
		num1 *= nums[j]
		right.append(num1)
	#
	answer = []
	answer.append(right[n - 2])
	for k in range(n - 3, -1, -1):
		answer.append(right[k] * left[n - k - 3])
	#
	answer.append(left[n - 2])
	return answer


def __main__():
    print(productExceptSelf([-1, 1, 0, -3, 3]))

__main__()