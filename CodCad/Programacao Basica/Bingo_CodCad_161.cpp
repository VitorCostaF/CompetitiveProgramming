#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,b;
	while(true){
		cin>>n>>b;
		if(n==0 && b==0)
			break;
		int vetor[b];
		int numeros[n+1];
		memset(numeros,0,sizeof(numeros));
		for(int i=0;i<b;i++)
			cin>>vetor[i];
		for(int i=0;i<b;i++){
			for(int j=0;j<b;j++){
				if(vetor[i]>vetor[j])
					numeros[vetor[i]-vetor[j]]=1;
				else
					numeros[vetor[j]-vetor[i]]=1;
			}
		}
		int faltando=0;
		for(int i=0;i<=n;i++)
			if(numeros[i]==0)
				faltando=1;
		if(faltando==0)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}