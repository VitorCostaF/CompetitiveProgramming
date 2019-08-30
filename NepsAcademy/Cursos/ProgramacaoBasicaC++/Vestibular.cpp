/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Cadeia de Caracteres
	Problema: Vestibular
	Estado: Accepted
*/

#include <iostream>

using namespace std;

int main () {
    int n, pontos = 0;
    string gabarito, resposta;

    cin >> n;
    cin >> gabarito >> resposta;

    for(int i = 0; i<gabarito.size(); i++)
        if(resposta[i] == gabarito[i])
            pontos++;

    cout << pontos << endl;

    return 0;
}