/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Vetores e Matrizes
	Problema: Torre
	Estado: Accepted
*/

#include <iostream>
#include <cstring>

using namespace std;

int main () {
    int n, max = 0;
    
    cin >> n;
    
    int entrada[n][n], soma[n][n];
    int linhas[n], colunas[n];

    memset(linhas, 0, sizeof(linhas));
    memset(colunas, 0, sizeof(colunas));

    for(int i=0; i<n ; i++) {
        for(int j = 0; j<n ; j++) {
            cin >> entrada[i][j];
            linhas[i]+=entrada[i][j];
            colunas[j]+=entrada[i][j];
        }
    }

    for(int i=0; i<n ; i++) {
        for(int j = 0; j<n ; j++) {
            soma[i][j] = linhas[i] + colunas[j] - 2*entrada[i][j];
            if(soma[i][j] > max)
                max = soma[i][j];
        }
    }
    cout << max << endl;
    return 0;
}