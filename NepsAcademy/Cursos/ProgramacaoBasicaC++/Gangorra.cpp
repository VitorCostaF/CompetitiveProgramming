/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
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
