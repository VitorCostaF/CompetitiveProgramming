/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
	Problema: Todos os Divisores
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int X;
	
	cin >> X;
	int i;
	for(i = 1; i<=X/2; i++) {
		if(X%i==0) 
			cout << i << " ";
	}
	cout << X << endl;
	
	return 0;	
}
