/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Premio do Milhão
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int N, A, soma = 0, dias = 0, dia = 1;
	
	cin >> N;
	
	while(dia <= N) {
		cin >> A;
		soma+=A;
		if(soma >= 1000000 && dias == 0)
			dias = dia;
		dia++;
	}
	cout << dias << endl;
	
	return 0;	
}
