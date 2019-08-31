n = gets
n = n.to_i

for i in (1..n) 
	string = gets
	if(string.size()<12)
		puts string
	else
		stringFinal = string[0]
		numero = string.size - 3
		stringFinal << numero.to_s
		stringFinal << string[string.size - 2]
		puts stringFinal
	end
end