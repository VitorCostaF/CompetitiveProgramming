n = input()
s = input()
c = s[0]
count = 0

for i in range(1,len(s)):
	if s[i]==c:
		count=count + 1
	else:
		c = s[i]

print(count)
		
	