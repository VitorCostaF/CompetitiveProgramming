/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
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
