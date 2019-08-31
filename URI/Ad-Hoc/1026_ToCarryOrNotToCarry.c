/*
	URI Online Judge 
	Category: Ad-hoc
	Problem: 1026 - To Carry or not to Carry
	Status: Accepted
*/

#include <stdio.h>
#include <math.h>

int main() {
	double a, b, result;
	int i;
	while(scanf("%lf", &a) != EOF) {
		scanf("%lf", &b);
		result = 0;
		for(i = 31; i >=0; i--) {
			double fator = pow(2, i);
			int aux = 0;
			if(a - fator >= 0) {
				aux++;
				a-=fator;
			}
			if(b - fator >= 0) {
				aux++;
				b-=fator;
			}
			if(aux == 1)
				result+=fator;
		}
		printf("%.0lf\n", result);
	}
	
	return 0;
}

