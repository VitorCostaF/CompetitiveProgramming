/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
	Problema: Gar�om
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
