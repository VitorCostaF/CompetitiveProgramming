#include<iostream>
using namespace std;

int main(){
	int n,p,q;
	char c;
	cin>>n>>p>>c>>q;
	if(c=='+'){
		p+=q;
		if(p>n)
			cout<<"OVERFLOW";
		else
			cout<<"OK";
	}
	else{
		p*=q;
		if(p>n)
			cout<<"OVERFLOW";
		else
			cout<<"OK";
	}
	return 0;
}