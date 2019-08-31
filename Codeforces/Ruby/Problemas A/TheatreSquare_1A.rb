s = gets
i = 0 
n = ""
m = ""
a = ""
while(s[i] !=" ")
	n << s[i];
	i = i + 1
end
i = i + 1

while(s[i] != " ")
	m << s[i]
	i = i + 1
end
i = i + 1

while(s[i] != "\n") 
	a << s[i]
	i = i+1
end

n = n.to_i
m = m.to_i
a = a.to_i


l = (n-n%a)/a
h = (m-m%a)/a

if(n%a != 0)
	l = l + 1
end

if(m%a != 0)
	h = h + 1
end

puts l*h