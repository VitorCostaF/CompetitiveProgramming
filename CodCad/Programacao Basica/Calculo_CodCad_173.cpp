#include<bits/stdc++.h>
using namespace std;

int main(){
	int max,m,n,x;
	cin>>m>>n;
	
	max=m>n?m:n;
	int numeroX[max];
	int numeroY[max];
	memset(numeroX,0,sizeof(numeroX));
	memset(numeroY,0,sizeof(numeroY));
	
	for(int i=0;i<m;i++)
		cin>>numeroX[i];
		
	for(int i=0;i<n;i++)
		cin>>numeroY[i];
	
	for(int i=max-1;i>=0;i--){
		if(numeroX[i]+numeroY[i]>1)
			numeroX[i-1]++;
		numeroY[i]=(numeroX[i]+numeroY[i])%2;
	}
	int max0=max;
	for(int i=max-1;i>=0;i--){
		if(numeroY[i]==1)
			break;
		max0--;
	}
	for(int i=0;i<max0;i++)
		cout<<numeroY[i]<<" ";
	cout<<endl;
	
	return 0;
}