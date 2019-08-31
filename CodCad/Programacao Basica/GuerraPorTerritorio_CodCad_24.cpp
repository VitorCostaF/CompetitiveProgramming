#include<iostream>
using namespace std;

int main(){
	int n,a,soma=0,meio;
	cin>>n;
	int vetor[n];
	for(int i=0;i<n;i++){
		cin>>a;
		vetor[i]=a;
		soma+=a;
	}
	meio=soma/2;
	soma=0;
	int i;
	for(i=0;i<n;i++){
		soma+=vetor[i];
		if(soma>meio)
			break;
	}
	i = i==0 ? 1:i;
	cout<<i;
	
	return 0;
}