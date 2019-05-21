/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
	Problema: Raizes
	Estado: Accepted
*/

#include <iostream> 
#include <cmath>

using namespace std;

int main() {
	int N;
	
	cout.precision(4);
	cout.setf(ios::fixed);
	
	cin >> N;
	
	for(int i = 0; i<N ; i++) {
		double input;
		cin >> input;
		cout << sqrt(input) << endl;
	}
	cout << endl;
	return 0;
}
