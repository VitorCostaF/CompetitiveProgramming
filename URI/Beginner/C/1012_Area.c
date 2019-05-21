/*
	URI Online Judge Problem
	Category: Begginer
	Problem: 1012 - Area
	Status: Accepted
*/

#include <stdio.h>

#define PI 3.14159
#define square(x) x*x

int main() {
	double A, B, C;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	printf("TRIANGULO: %.3f\n", A*C/2);
	printf("CIRCULO: %.3f\n", PI*square(C));
	printf("TRAPEZIO: %.3f\n", (A+B)*C/2);
	printf("QUADRADO: %.3f\n", square(B)); 
	printf("RETANGULO: %.3f\n", A*B);
	
	return 0;
}
