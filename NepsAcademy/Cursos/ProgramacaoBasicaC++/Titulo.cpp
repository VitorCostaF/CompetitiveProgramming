/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Funções e Ordenação
	Problema: Titulo
	Estado: Accepted
*/

#include <iostream>
#include <cctype>

using namespace std;

string title(string F){
    int pos=0;
    string aux;
    aux.push_back(toupper(F[0]))

    for(int i=0;i<F.size();i++)   
    return F;
}

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}