#include<iostream>
using namespace std;

int main(){
	int n,m,soma=0,i=1;
	cin>>n;
	while(i<=n){
		cin>>m;
		if((soma+=m)>=1000000){
			cout<<i;
			i=n;
		}
		i++;
	}
	return 0;
}