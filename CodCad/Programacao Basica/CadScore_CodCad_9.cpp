#include<iostream>
using namespace std;

int main(){
	int p,n,f;
	cin>>p>>n;
	for(int i=1;i<=n;i++){
		cin>>f;
		p+=f;
		if(p>100)
			p=100;
		if(p<0)
			p=0;
	}
	cout<<p<<endl;
	return 0;
}