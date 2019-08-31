#include<iostream>
using namespace std;

int main(){
	float a,b,c,d,e,M,m;
	cin>>a>>b>>c>>d>>e;
	
	m=a;M=a;
	if(b<m) m=b; 
	if(c<m) m=c;
	if(d<m) m=d;
	if(e<m) m=e;
	
	if(b>M) M=b;
	if(c>M) M=c;
	if(d>M) M=d;
	if(e>M) M=e;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	cout<<a+b+c+d+e-M-m;
	return 0;
}
