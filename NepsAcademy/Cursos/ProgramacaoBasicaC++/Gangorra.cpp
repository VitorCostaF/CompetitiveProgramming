/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Gangorra
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int p1, c1, p2, c2;
	
	cin >> p1 >> c1 >> p2 >> c2;
	
	if(p1*c1 > p2*c2)
		cout << "-1" << endl;
	else if(p1*c1 < p2*c2)
		cout << "1" << endl;
	else 
		cout << "0" << endl;
	return 0;	
}
