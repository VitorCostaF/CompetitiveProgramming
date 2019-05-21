/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
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
