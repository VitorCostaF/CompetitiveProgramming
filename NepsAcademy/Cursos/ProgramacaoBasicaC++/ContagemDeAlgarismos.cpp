/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Cadeia de Caracteres
	Problema: Contagem de Algarismos
	Estado: Accepted
*/

//#include<bits/stdc++.h>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    int numeros[10];

    memset(numeros, 0, sizeof(numeros));

    string input;

    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> input;
        for(int j=0;j<input.size();j++)
            numeros[input[j]-'0']++;
    }

    for(int i=0;i<10;i++)
        cout << i << " - " << numeros[i] << endl;

    return 0;
}