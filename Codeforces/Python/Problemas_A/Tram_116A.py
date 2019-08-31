#------------------------------------------
#			  Codeforeces
#  Codeforeces Beta Round #87 (Div.2 Only)
#		 Problem 116: A. Tram
#------------------------------------------

n = input()
n = int(n)
minimo = 0
numeroParada = 0

for i in range(0,n):
	stop = input()
	stop = stop.split(" ")	
	numeroParada = numeroParada - int(stop[0]) + int(stop[1])
	if numeroParada > minimo :
		minimo = numeroParada

print(minimo)
		