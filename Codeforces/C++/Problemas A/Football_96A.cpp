#include<iostream>

using namespace std;

int main() {
	string jogadores;
	cin>>jogadores;
	int cont = 1;
	char anterior = jogadores[0];
	for(int i=1;i<jogadores.size();i++) {
		if(jogadores[i]==anterior) 
			cont++;
		else
			cont=1;
		anterior = jogadores[i];
		if(cont==7) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}