/*
	URI Online Judge 
	Category: Ad-hoc
	Problem: 1030 - Flavious Josephus Legend
	Status: Accepted - 0.692
*/

#include <stdio.h>
#include <string.h>

typedef struct node {
	int seq;
	int visited;
	int prox;
} node;

int main() {
	int NC, n, k;
	
	scanf("%d", &NC);
	int i;
	for(i = 1; i<=NC; i++) {
		int m, contador, pointer, avanco;;
		
		scanf("%d %d", &n, &k);
		
		node vetor[n];
				
		for(m = 0; m < n; m++) {
			vetor[m].seq = m;
			vetor[m].visited = 0;
			vetor[m].prox = 1;
		} 
		if(n==1) {
			printf("Case %d: %d\n", i, 1);
			continue;
		}	
			
		vetor[(k-1)%n].visited=1;
		if(k==1) 
			vetor[n-1].prox++;
		else
			vetor[(k-2)%n].prox++;
		contador = n - 1;
		pointer = (k-1)%n;
		while(contador > 1) {
			avanco=0;
			while(avanco < k) {
				int aux = pointer;
				pointer = (pointer+vetor[pointer].prox)%n;
				if(vetor[pointer].visited==1) 
					vetor[aux].prox+=vetor[pointer].prox;					
				else
					avanco++;
			}
			vetor[pointer].visited = 1;
			if(pointer == 0) 
				vetor[n-1].prox++;
			else
				vetor[pointer-1].prox++;
			contador--;
		}
		int j = 0;		
		while(vetor[j].visited && j < n)
			j++;
		
		printf("Case %d: %d\n", i, j+1);
	}
	return 0;
}
