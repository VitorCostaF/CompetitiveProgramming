/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Flíper
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int P, R;
	
	cin >> P >> R;
	
	if(P == 0)
		cout << "C" << endl;
	else if(R == 0)
		cout << "B" << endl;
	else
		cout << "A" << endl;
		
	return 0;	
}
