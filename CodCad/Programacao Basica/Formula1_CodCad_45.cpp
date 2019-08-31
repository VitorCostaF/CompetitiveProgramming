#include<bits/stdc++.h>
using namespace std;
int S=1;
struct Piloto{
	int id;
	int posicoes[105];
	int pontosSistema[12];
	
};

struct Sistema{
	int posicoesPontuadas;
	int pontos[105];
	//int maxDoSistema=0;
};

bool compara(Piloto a, Piloto b){
	if(a.pontosSistema[S]==b.pontosSistema[S])
		return a.id<b.id;
	return a.pontosSistema[S]>b.pontosSistema[S];
}

int main(){
	int g,p,s,k;
	Piloto pilotos[105];
	while(true){
		S=1;
		cin>>g>>p;
		if(g==0 && p==0)
			break;
		for(int i=0;i<105;i++)
			pilotos[i].id=i;
		for(int i=0;i<105;i++){
			memset(pilotos[i].posicoes,0,sizeof(pilotos[i].posicoes));
			memset(pilotos[i].pontosSistema,0,sizeof(pilotos[i].pontosSistema));
		}
		for(int i=1;i<=g;i++)
			for(int j=1;j<=p;j++){
				int aux;
				cin>>aux;
				pilotos[j].posicoes[aux]++;
			}
		/*for(int i=1;i<=p;i++){
			cout<<"piloto "<<i<<" ";
			for(int j=1;j<=p;j++){
				cout<<pilotos[i].posicoes[j]<<" ";
			}
			cout<<endl;
		}*/
		cin>>s;
		Sistema sistemas[s+3];
		for(int i=1;i<=s;i++){
			cin>>k;
			sistemas[i].posicoesPontuadas=k;
			for(int j=1;j<=k;j++){
				cin>>sistemas[i].pontos[j];
			}
		}		
		for(int i=1;i<=p;i++)
			for(int j=1;j<=s;j++)
				for(int l=1;l<=sistemas[j].posicoesPontuadas;l++){
					pilotos[i].pontosSistema[j]+=pilotos[i].posicoes[l]*sistemas[j].pontos[l];
				}
		/*		
		for(int i=1;i<=s;i++){
			for(int j=1;j<=p;j++){
				if(pilotos[j].pontosSistema[s]>sistemas[s].maxDoSistema)
					sistemas[s].maxDoSistema=pilotos[j].pontosSistema[s];
			}
		}
			
		for(int i=1;i<=s;i++){
			for(int j=1;j<=p;j++){
				if(pilotos[j].pontosSistema[s]==sistemas[s].maxDoSistema)
					cout<<pilotos[j].id<<" ";
			}
			cout<<endl;
		}
		*/
		for(int i=1;i<=s;i++){
			sort(pilotos+1,pilotos+p+1,compara);
			int j=1;
			while(pilotos[j].pontosSistema[i]==pilotos[1].pontosSistema[i]){
				cout<<pilotos[j].id<<" ";
				j++;
			}
			cout<<endl;
			S++;
		}
	}
	
	return 0;
}