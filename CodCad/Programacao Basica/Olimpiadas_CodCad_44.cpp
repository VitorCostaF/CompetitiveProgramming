#include<iostream>
#include<algorithm>
using namespace std;

struct Pais{
	int id;
	int ouro=0;
	int prata=0;
	int bronze=0;
};

bool comparacao(Pais a, Pais b){
	if(a.ouro==b.ouro){
		if(a.prata==b.prata){
			if(a.bronze==b.bronze){
				return a.id<b.id;
			}
			return a.bronze>b.bronze;
		}
		return a.prata>b.prata;
	}
	return a.ouro>b.ouro;
}

int main(){
	int n,m;
	Pais paises[110];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		paises[i].id=i;
	}
	for(int j=0;j<m;j++){
		int k;
		cin>>k;
		paises[k].ouro++;
		cin>>k;
		paises[k].prata++;
		cin>>k;
		paises[k].bronze++;
	}
	sort(paises+1,paises+n+1,comparacao);
	
	for(int i=1;i<=n;i++)
		cout<<paises[i].id<<" ";
	cout<<endl;
			
	return 0;
}