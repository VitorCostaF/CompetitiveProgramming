/*
	URI Online Judge Problem
	Category: Begginer
	Problem: 1010 - Simple Calculate
	Status: Accepted
*/

#include <stdio.h>

int main() {
	int id1, id2, amount1, amount2;
	float unitPrice1, unitPrice2;
	
	scanf("%d %d %f", &id1, &amount1, &unitPrice1);
	scanf("%d %d %f", &id2, &amount2, &unitPrice2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", amount1*unitPrice1 + amount2*unitPrice2);
	
	return 0;
}
