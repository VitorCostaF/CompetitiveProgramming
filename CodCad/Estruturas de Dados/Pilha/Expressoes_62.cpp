//------------------------------------
// CodCad - Estruturas de Dados: Stack
// Problema 62: Expressões 
//--------------------------------------


#include<iostream>
#include<stack>

using namespace std;


int main() {
	int t;
	cin>>t;
	
	
	for(int i=0;i<t;i++) {
		stack<char> pilha;
		string expressao;
		bool valida=true;
		cin>>expressao;
		
		if(expressao.size()==0) {
			cout<<'S'<<endl;
			continue;
		}
		for(int j=0;j<expressao.size();j++) {
			if(expressao[j]=='(' || expressao[j] == '{' || expressao[j]=='[')
				pilha.push(expressao[j]);
			else {
				if(pilha.empty()==true) {
					valida=false;
					break;
				}
				else if(pilha.top()!=expressao[j]-1 && pilha.top()!=expressao[j]-2) {
					valida=false;
					break;
				}
				else {
					pilha.pop();
				}
			}
		}
		if(!pilha.empty())
			valida=false;
		if(valida)
			cout<<'S'<<endl;
		else
			cout<<'N'<<endl;
	}
	
	return 0;
}