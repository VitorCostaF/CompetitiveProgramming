#=====================================    
#   URI Online Judge Problem
#   Category: Begginer
#   Problem: 1012 - Area
#   Status: Accepted
#=====================================

input = input()
input = input.split()

A = float(input[0])
B = float(input[1])
C = float(input[2])

PI = 3.14159

print('TRIANGULO: {:.3f}'.format(A*C/2))
print('CIRCULO: {:.3f}'.format(PI*C**2))
print('TRAPEZIO: {:.3f}'.format((A + B)*C/2))
print('QUADRADO: {:.3f}'.format(B**2))
print('RETANGULO: {:.3f}'.format(A*B))