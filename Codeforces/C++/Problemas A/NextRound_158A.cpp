#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> pontos;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++) {
		int aux;
		cin>>aux;
		pontos.push_back(aux);
	}
	int count=0;
	if(n>1){
		int corte;
		corte=pontos[k-1];
		for(int i=0;i<n;i++){
			if(pontos[i]>=corte && pontos[i]>0)
				count++;
			else
				break;
		}			
	}
	else
		if(pontos[0]>0)
			count=1;
	cout<<count<<endl;
	return 0;
}