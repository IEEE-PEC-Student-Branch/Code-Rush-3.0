t = input()
for i in range(t):
	n,k=map(int,input().split())
	a=list(map(int,input().split()))
	s=a[0]
	c=0
	for i in range(1,n):
		if s+a[i]<k:
			c+=(k-s-a[i])
			a[i]+=(k-s-a[i])
		s=a[i]		
	print(c)
	print(*a)