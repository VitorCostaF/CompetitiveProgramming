/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
	Problema: Fl�per
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
