#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int carros[n];
	memset(carros,0,sizeof(carros));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			int k;
			cin>>k;
			carros[i]+=k;
		}
	
	int indiceMin=0;
	int min=carros[0];
	for(int i=0;i<n;i++)
		if(carros[i]<min){
			indiceMin=i;
			min=carros[i];
		}
	cout<<indiceMin+1<<endl;
	
	int min2=1000000000;
	for(int i=0;i<n;i++)
		if(carros[i]<min2 && carros[i]>min){
			min2=carros[i];
			indiceMin=i;
		}
	cout<<indiceMin+1<<endl;
	min=min2;
	min2=1000000000;
	for(int i=0;i<n;i++)
		if(carros[i]<min2 && carros[i]>min){
			min2=carros[i];
			indiceMin=i;
		}
	cout<<indiceMin+1<<endl;
	return 0;
}