/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Controlando o Código
	Problema: Sub-prime
	Estado: Accepted
*/

#include <iostream>

using namespace std;

int main() {
	int B, N;
	cin >> B >> N; 
	while(B!=0 || N!=0) {
		int bancos[B+1];
		int D, C, V;
		
		for(int i = 1; i<=B ; i++) 
			cin >> bancos[i];
			
		for(int i = 0; i<N; i++) {
			cin >> D >> C >> V;
			bancos[D]-=V;
			bancos[C]+=V;
		}
		char liquidar = 'S';
		
		for(int i = 1; i<=B; i++) {
			if(bancos[i] < 0) {
				liquidar = 'N';
				break;
			}
		}
		cout << liquidar << endl;
		cin >> B >> N;
	}
	return 0;
}

