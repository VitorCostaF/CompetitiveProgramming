/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Controlando o C�digo
	Problema: Potencias Simples
	Estado: Accepted
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y;
	
	cout.precision(4);
	cout.setf(ios::fixed);
	
	cin >> x >> y;
	
	cout << pow(x, y) << endl;
	
	return 0;
}
