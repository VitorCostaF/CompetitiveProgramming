/*
	Problema do Neps Academy
	Categoria: Programação Básica
	Sub-category: Estruturas de decisão
	Problem: 2 - Medalhas
	Estado: Accepted
*/

#include <stdio.h> 

#define swap(a,b)  a = a + b, b = a - b, a = a - b

int main() {
	int t1, t2, t3, max, med, min, ouro, prata, bronze;
	
	scanf("%d %d %d", &t1, &t2, &t3);
	
	min = t1, ouro = 1;
	med = t2, prata = 2;
	max = t3, bronze = 3;

	if(med > max) {swap(med, max); swap(bronze, prata);}
	if(med < min) {swap(med, min); swap(prata, ouro);}
	if(max < med) {swap(max, min); swap(bronze, prata);}
	
	printf("%d\n%d\n%d\n", ouro, prata, bronze);
	
	return 0;
}
