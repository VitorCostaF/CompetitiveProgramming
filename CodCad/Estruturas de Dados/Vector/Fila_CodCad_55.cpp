#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


struct Pessoa{
	int id;
	int pos;
};

bool comparacao(Pessoa a, Pessoa b){
	return a.id<b.id;
}

bool arrumaOrdem(Pessoa a, Pessoa b){
	return a.pos<b.pos;
}

int main(){
	vector<Pessoa> fila;
	vector<Pessoa> sairam;
	vector<Pessoa> filaFinal;
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		Pessoa pessoa; 
		cin>>pessoa.id;
		pessoa.pos=i;
		fila.push_back(pessoa);
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		Pessoa pessoa; 
		cin>>pessoa.id;
		sairam.push_back(pessoa);
	}
	sort(sairam.begin(),sairam.end(),comparacao);
	sort(fila.begin(),fila.end(),comparacao);
	
	int aux=sairam.size()-1;
	int i;
	for(i=fila.size()-1;i>=0 && aux>=0;i--){
		if(fila[i].id!=sairam[aux].id){
			Pessoa pessoa=fila[i];
			filaFinal.push_back(pessoa);
			fila.pop_back();
		}
		else{
			aux--;
			fila.pop_back();
			sairam.pop_back();
		}
	}
	while(i>=0){
		filaFinal.push_back(fila[i]);
		fila.pop_back();
		i--; 
	}

	sort(filaFinal.begin(),filaFinal.end(),arrumaOrdem);
	
	for(int j=0;j<filaFinal.size();j++)
		cout<<filaFinal[j].id<<" ";
	cout<<endl;
	return 0;
}