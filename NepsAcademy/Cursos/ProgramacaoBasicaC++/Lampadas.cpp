/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Lampadas
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int N, I, A=0, B=0;
	
	cin >> N;
	
	for(int i = 1; i<= N; i++) {
		cin >> I;
		A=(A+1)%2;
		if(I == 2)
			B=(B+1)%2;
	}
	cout << A << endl << B << endl;
	return 0;	
}
