def isIsomorphic(s, t):
	S = {}
	m = len(s)
	n = len(t)
	if (m != n):
		return False
	for i in range(0, n):
		if (s[i] in S):
			if (S[s[i]] != t[i]):
				return False
			#
		#
		else:
			S[s[i]] = t[i]
		#
	print
	if len(set(S.values())) != len(set(S.keys())):
		return False
	return True

def __main__():
    s = input()
    t = input()
    print(isIsomorphic(s, t))

__main__()
