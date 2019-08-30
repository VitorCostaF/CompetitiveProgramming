/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Vetores e Matrizes
	Problema: Quadrado Magico
	Estado: Accepted
*/

#include <iostream>

using namespace std;

int main() {
    int n, sl=0, sc=0;
    bool magico = true;
    cin >> n;

    int quadrado[n][n];

    for (int i =0; i<n; i++) 
        for (int j=0; j<n; j++) {
            cin >> quadrado[i][j];
            if (i==0)
                sc+=quadrado[i][j];
        } 
            
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) 
            sl+=quadrado[i][j];
        if (sl != sc) {
            magico = false;
            break;
        }
        sl = 0;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) 
            sl+=quadrado[j][i];
        if (sl != sc) {
            magico = false;
            break;
        }
        sl = 0;
    }

    for(int i=0; i<n; i++)  
        sl+=quadrado[i][i];
    if(sl != sc)
        magico = false;
    sl = 0;

    for(int i=0; i<n; i++)  
        sl+=quadrado[i][n-i-1];
    if(sl != sc)
        magico = false;

    if(magico)
        cout << sc << endl;
    else 
        cout << -1 << endl;

    return 0;
}