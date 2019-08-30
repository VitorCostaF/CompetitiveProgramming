/*
	Neps Academy
	Curso: Programacao Basica para Competicoes de Programacao (em C++)
	Categoria: Cadeia de Caracteres
	Problema: Huaauhahhuahau
	Estado: Accepted
*/

#include <iostream>

using namespace std;

int main() {
    string input;
    int cursor = 0;

    cin >> input;

    char vogais[input.size()];

    for(int i = 0; i < input.size(); i++)
        if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u') {
            vogais[cursor++] = input[i];
        }
            

    for(int i=0; i<cursor/2; i++)
        if(vogais[i] != vogais[cursor-i-1]) {
            cout << "N" << endl;
            return 0;
        }
    cout << "S" << endl;
    
    return 0;
}
