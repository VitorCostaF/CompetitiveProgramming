/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
	Problema: Bondinho
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int A, M;
	
	cin >> A >> M;
	
	if(A+M <= 50)
		cout << "S" << endl;
	else
		cout << "N" << endl;
		
	return 0;
}
