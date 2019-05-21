/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Garçom
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int N, L, C, soma = 0;
	
	cin >> N;
	
	while(N > 0) {
		cin >> L >> C;
		if(L > C)
			soma+=C;
		N--;
	}
	
	cout << soma << endl;
	
 	return 0;	
}
