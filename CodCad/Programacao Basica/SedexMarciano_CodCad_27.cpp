#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int l,a,p,r,d;
	cin>>l>>a>>p>>r;
	d=sqrt(l*l+a*a+p*p)/2;
	if(d>r)
		cout<<'N'<<endl;
	else
		cout<<'S'<<endl;
	return 0;
}