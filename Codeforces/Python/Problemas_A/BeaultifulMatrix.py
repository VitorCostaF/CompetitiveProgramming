#-------------------------------
#		   Codeforces
#		Round #163 (Div.2)
# 	Problem: Beaultiful Matrix 
#	   	 Number: 263 A
#-------------------------------

m = 0
n = 0
for i in range(0,5):
	s = input()
	l = s.split(" ")
	for j in range(0,5):
		if l[j]=='1':
			m = i+1
			n = j+1
			break

if m>3:
	m = m-3
else:
	m = 3-m
	
if n>3:
	n = n-3
else:
	n = 3-n

print(m+n)