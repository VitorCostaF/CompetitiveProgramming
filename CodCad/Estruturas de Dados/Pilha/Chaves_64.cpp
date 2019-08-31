//------------------------------------
// CodCad - Estruturas de Dados: Stack
// Problema 64: Chaves 
//--------------------------------------

#include<iostream>
#include<stack>

using namespace std;

int main() {
	int n;
	bool valida=true;
	stack<char> pilha;
	
	cin>>n;
	
	for(int i=0;i<=n;i++) {
		string linha;
		getline(cin,linha);
		for(int j=0;j<linha.size();j++) {
			if(linha[j]=='{')
				pilha.push(linha[j]);
			else if(linha[j]=='}') {
				if(pilha.empty()) {
					valida = false;
					break;
				} else {
					pilha.pop();
				}
			}
		}
		if(!valida)
			break;
	}
	if(!pilha.empty())
		valida=false;
	
	if(valida) 
		cout<<'S'<<endl;
	else
		cout<<'N'<<endl;
	
	return 0;
}
