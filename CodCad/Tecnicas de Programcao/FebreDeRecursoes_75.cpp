#include<iostream>
#include<cstring>

using namespace std;

long long fk[1000000+10];
long long a[1000000+10];

long long funcao(int k,int m, int n) {
	if(fk[k]!=-1) return fk[k];
	fk[k]=0;
	for(int i=1;i<=n;i++) {
		fk[k]+=(a[i]*funcao(k-i,m,n))%m;
		fk[k]=fk[k]%m;
	}
	
	return fk[k];
}

int main() {
	int n, k, m;
	cin>>n>>k>>m;
	
	for(int i=1;i<=n;i++) {
		int ai;
		cin>>ai;
		a[i]=ai;
	}

	memset(fk,-1,sizeof(fk));
	
	for(int i=1;i<=n;i++) {
		int fi;
		cin>>fi;
		fk[i]=fi;
	}
	
	cout<<funcao(k,m,n)<<endl;
	
	return 0;
}
