/*
	URI Online Judge Problem
	Category: Begginer
	Problem: 1013 - The Greatest
	Status: Accepted
*/

#include <stdio.h>

#define abs(n) (n) >= 0 ? (n) : -(n)

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
		
	a = (a + b + (abs(a-b)))/2;
	a = (a + c + (abs(a-c)))/2;
	
	printf("%d eh o maior\n", a);
	
	return 0;
}
