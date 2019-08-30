/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Vetores e Matrizes
	Problema: Campo Minado
	Estado: Accepted
*/

#include <iostream> 
#include <cstring>

using namespace std;

int main() {
	int n, input, i;
	
	cin >> n;
	
	int campo[n];
	
	memset(campo, 0 , sizeof(campo));
	
	cin >> input;
	
	campo[0]+=input;
	
	if(n!=1)
		campo[1]+=input;
	
	for(i = 1; i < n-1; i++) {
		cin >> input;
		campo[i-1]+=input;
		campo[i]+=input;
		campo[i+1]+=input;
	}
	if(n!=1) {
		cin >> input;
		campo[i-1]+=input;
		campo[i]+=input;	
	}
	
	
	for(int j=0; j<n; j++) 
		cout << campo[j] << endl;
	
	return 0;	
}
