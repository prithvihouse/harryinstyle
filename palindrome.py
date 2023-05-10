# function which return reverse of a string

def isPalindrome(s):
	return s == s[::-1]


# Driver code
s = "raj"
ans = isPalindrome(s)

if ans:
	print("Yes")
else:
	print("No")
