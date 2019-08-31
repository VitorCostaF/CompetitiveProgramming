/*
	URI Online Judge 
	Category: Ad-hoc
	Problem: 1030 - Flavious Josephus Legend
	Status: Accepted - 0.208
	Remark: This is another solution
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int seq;
	struct node * prox;
} node;

int main() {
	int NC, n, k;
	
	scanf("%d", &NC);
	int i;
	for(i = 1; i<=NC; i++) {
		node* first, *aux, *start, *before;
		
		scanf("%d %d", &n, &k);
		
		first = malloc(sizeof(node));
		if(!first) return 1;
		
		start = NULL;
		if(k%n==1)
			start = first;
		first->seq = 1;
		aux = first;
		
		int j;
		for(j = 2; j<=n; j++) {
			node* aux2 = malloc(sizeof(node));
			if(!aux2) return 2;
			
			if(!start) {
				if(k%n==j || j == n) {
					start = aux2;
					before = aux;
				}
			}
						
			aux2->seq = j;
			aux->prox = aux2;
			aux=aux2;
		}
		aux->prox = first;
		int avanco = 1;
		
		before->prox = start->prox;
		free(start);
		start = before->prox;
		n--;		
		while(start->prox != start) {
			if(avanco == (k-1)%n + 1 ) {
				before->prox = start->prox;
				free(start);
				start = before->prox;
				avanco = 1;
				n--;
			} else {
				before = start;
				start = start->prox;
				avanco++;
			}
		}
		printf("Case %d: %d\n", i, start->seq);
	}	
	return 0;
}

