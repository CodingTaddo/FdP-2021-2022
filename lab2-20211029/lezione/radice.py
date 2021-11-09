def radice(r, precisione):
	n1, n2 = r, 1
	while (abs(n1-n2) > 10**(-precisione)):
		print(n1)
		n1 = (n1+n2)/2
		n2 = r/n1
	
	print(n1)

radice(2,40)
