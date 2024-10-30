def PascalTraingle(n):
	traingle=[]
	for i in range(n):
		traingle+=[[1]*(i+1)]
	for i in range(2,n):
		for j in range(1,len(traingle[i])-1):
			traingle[i][j]=traingle[i-1][j]+traingle[i-1][j-1]
	return traingle
	
print(PascalTraingle(5))
	
