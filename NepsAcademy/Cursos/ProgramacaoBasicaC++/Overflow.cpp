/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Cadeia de Caracteres
	Problema: Overflow
	Estado: Accepted
*/

#include <iostream>

using namespace std;

int main() {
    int n, p, q, result;
    char c;

    cin >> n;
    cin >> p >> c >> q;

    if(c == '+')
        result = p + q;
    else 
        result = p*q;
    
    if (result <= n)
        cout << "OK" << endl;
    else 
        cout << "OVERFLOW" << endl;

    return 0;
}