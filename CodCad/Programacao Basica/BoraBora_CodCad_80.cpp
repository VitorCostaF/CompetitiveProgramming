#include<iostream>
#include<vector>

struct Carta{
	int numero;
	char naipe;
};

struct Mao {
	vector<Carta> cartasMao;
};

int main(){
	int p,m,n;
	vector<Carta> saque;
	vector<Carta> descarte;
	
	cin>>p>>m>>n;
	
	Mao jogadores[p+1];
	
	for(int i=1;i<=p;i++)
		for(int j=0;j<m;j++){
			Carta cartaAux;
			cin>>cartaAux.numero;
			cin>>cartaAux.naipe;
			jogadores[i].cartasMao.push_back(cartaAux);
		}
	cin>>	
		
	return 0;
}