//------------------------------------
// 			   CodCad 
//	  Estruturas de Dados: Stack
// 	Problema 86: Apagando e Ganhando 
//--------------------------------------

#include<iostream>
#include<stack>

using namespace std;

int main() {
	int n,d;
	cin>>n>>d;
	while(n!=0 || d!=0) {
		string numero;
		stack<int> auxiliar;
		stack<int> saida;
		cin>>numero;
		
		for(int i=numero.size()-1;i>0;i--)
			saida.push(numero[i]-'0');
		auxiliar.push(numero[0]-'0');
		
		int j=1;
		
		while(true) {
			while(auxiliar.empty()==false && j<=d && !saida.empty() && auxiliar.top()<saida.top()) {
				auxiliar.pop();
				j++;
			}
			if(j<=d) {
				if(saida.empty()==true) 
					break;
				auxiliar.push(saida.top());
				saida.pop();
			}
			else 
				break;
		}
		
		while(j<=d) {
			auxiliar.pop();
			j++;
		}
		
		while(!auxiliar.empty()) {
			saida.push(auxiliar.top());
			auxiliar.pop();
		}
		while(!saida.empty()) {
			cout<<saida.top();
			saida.pop();
		}
		
		cout<<endl;
		
		cin>>n>>d;
		
	}
	return 0;
}
