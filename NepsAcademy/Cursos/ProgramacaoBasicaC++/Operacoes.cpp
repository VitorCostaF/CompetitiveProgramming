/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Cadeia de Caracteres
	Problema: Operacoes
	Estado: Accepted
*/

#include <iostream>

using namespace std;

int main () {
    char op;
    double a, b;

    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> op;

    cin >> a >> b;

    if (op == 'M')
        cout << a * b << endl;
    else 
        cout << a / b << endl;
        
    return 0;
}