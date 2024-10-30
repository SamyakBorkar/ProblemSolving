def PascalTraingle(index):
	if index==0:
		return [1]
	elif index==1:
		return [1,1]
	else:
		l=[1]*(index+1)
		for i in range(1,len(l)-1):
			l[i]=CalculateValue(index, i)
		return l
def CalculateValue(row, column):
	return factorial(row)//(factorial(column)*factorial(row-column))
	
def factorial(n):
	result = 1
	for i in range(1, n + 1):
		result *= i
	return result
print(PascalTraingle(2))
