/*
	URI Online Judge Problem
	Category: Begginer
	Problem: 1011 - Sphere
	Status: Accepted
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
	double R;
	
	scanf("%lf", &R);
	
	printf("VOLUME = %.3f\n", (4.0/3.0)*PI*pow(R, 3));
	
	return 0;
}
