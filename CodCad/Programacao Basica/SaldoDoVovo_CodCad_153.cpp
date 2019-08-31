#include<iostream>
using namespace std;

int main(){
	int n,saldo,i=1,min,mov;
	cin>>n>>saldo;
	min=saldo;
	while(i<=n){
		cin>>mov;
		saldo+=mov;
		if(saldo<min)
			min=saldo;
		i++;
	}
	cout<<min;
	return 0;
}