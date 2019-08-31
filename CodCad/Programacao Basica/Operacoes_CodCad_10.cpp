#include<iostream>
using namespace std;

int main(){
	char c;
	double a,b;
	cin>>c>>a>>b;
	cout.precision(2);
	cout.setf(ios::fixed);
	if(c=='M')
		cout<<a*b;
	else
		cout<<a/b;
	return 0;
}