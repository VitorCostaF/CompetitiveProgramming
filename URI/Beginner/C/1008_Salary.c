/*
	URI Online Judge Problem
	Category: Begginer
	Problem: 1008 - Salary
	Status: Accepted
*/

#include <stdio.h>

int main() {
	int number, hours;
	float amtPerHour;
	
	scanf("%d", &number);
	scanf("%d", &hours);
	scanf("%f", &amtPerHour);
	
	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2f\n", hours*amtPerHour);
	
	return 0;
}
