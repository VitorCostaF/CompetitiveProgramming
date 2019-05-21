/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Par ou Ímpar
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
