#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m[n][n];
	int pesoColunas[n+2];
	int pesoLinhas[n+2];
	
	memset(pesoLinhas,0,sizeof(pesoLinhas));
	memset(pesoColunas,0,sizeof(pesoColunas));
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin>>m[i][j];
			pesoLinhas[i]+=m[i][j];
			pesoColunas[j]+=m[i][j];
		}
	int max=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			int pesoDescontado=pesoLinhas[i]+pesoColunas[j]-2*m[i][j];
			if(pesoDescontado>max)
				max=pesoDescontado;
		}
	cout<<max<<endl;
	return 0;
}
