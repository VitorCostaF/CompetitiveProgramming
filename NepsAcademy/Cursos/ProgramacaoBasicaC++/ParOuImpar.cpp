/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
	Problema: Par ou �mpar
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int b, c;
	
	cin >> b >> c;
	
	if( (b + c)%2 == 0)
		cout << "Bino" << endl;
	else
		cout << "Cino" << endl;
		
	return 0;	
}
