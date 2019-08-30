/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Aprovado ou Reprovado
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int A, B;
	
	cin >> A >> B;
	
	if((A+B)/2 >= 7)
		cout << "Aprovado" << endl;
	else if((A+B)/2 >= 4)
		cout << "Recuperacao" << endl;
	else 
		cout << "Reprovado" << endl;
	return 0;	
}
