/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Consecutivos
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int N, Vi, Vi_anterior, contagem = 1, maximo = 1;
	
	cin >> N;
	
	cin >> Vi_anterior;
	
	for(int i = 0; i < N - 1; i++) {
		cin >> Vi;
		if(Vi == Vi_anterior) {
			contagem++;
			if(contagem > maximo)
				maximo = contagem;
		} else {
			contagem = 1;
		}
		Vi_anterior = Vi;
	}
	
	cout << maximo << endl;
	
	return 0;	
}
