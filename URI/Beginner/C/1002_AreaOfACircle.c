/*
	URI Online Judge Problem
	Category: Begginer
	Problem: 1002 - Area of a Circle
	Status: Accepted
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
	double R;
	
	scanf("%lf", &R);
	
	printf("A=%.4f\n", PI*pow(R,2.0));
	
	return 0;
}
