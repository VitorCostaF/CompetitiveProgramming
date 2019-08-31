#include<iostream>
using namespace std;

int main(){
	int n,l,c,soma=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l>>c;
		if(l>c)
			soma+=c;
	}
	cout<<soma;
	return 0;
}