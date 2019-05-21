/*
	URI Online Judge Problem
	Category: Begginer
	Problem: 1009 - Salary with Bonus
	Status: Accepted
*/

#include <stdio.h>

int main() {
	double salary, sales;
	char name[200];
		
	fgets(name, sizeof(name), stdin);
	scanf("%lf %lf", &salary, &sales);
	
	printf("TOTAL = R$ %.2f\n", salary + 0.15*sales);
		
	return 0;
}
