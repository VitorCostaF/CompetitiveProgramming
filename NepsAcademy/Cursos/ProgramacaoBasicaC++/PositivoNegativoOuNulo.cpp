/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Positivo, Negativo ou Nulo
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int x;
	
	cin >> x;
	
	if(x > 0)
		cout << "positivo" << endl;
	else if(x < 0)
		cout << "negativo" << endl;
	else
		cout << "nulo" << endl;
	
	return 0;	
}
