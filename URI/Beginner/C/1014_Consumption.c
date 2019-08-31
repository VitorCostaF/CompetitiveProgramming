/*
	URI Online Judge 
	Category: Beginner
	Problem: 1014 - Consumption
	Status: Accepted
*/

#include <stdio.h>

int main() {
	int km;
	float liters;
	
	scanf("%d %f", &km, &liters);
	
	printf("%.3f km/l\n", km/liters);
	
	return 0;
}
