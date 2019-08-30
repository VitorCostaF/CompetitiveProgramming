/*
	Neps Academy
	Curso: Programa��o B�sica para Competi��es de Programa��o (em C++)
	Categoria: Vetores e Matrizes
	Problema: C�digo
	Estado: Accepted
*/

#include <iostream> 

using namespace std;

int main() {
	int n, cursorPadrao = 0, contagem = 0;
	char padrao[] = "100"; 
	cin >> n;
	
	char entrada[n];
	
	for(int i=0; i<n; i++) {
		cin >> entrada[i];
	}
	
	for(int i = 0; i<n; i++) {
		if(entrada[i] == padrao[cursorPadrao]) {
			cursorPadrao++;
			if(cursorPadrao == 3) {
				contagem++;
				cursorPadrao=0;
			} 		
		}
		else {
			cursorPadrao=0;	
			if(entrada[i] == padrao[cursorPadrao])
				cursorPadrao++;
		}
	}
	
	cout << contagem << endl;
	
	return 0;	
}
