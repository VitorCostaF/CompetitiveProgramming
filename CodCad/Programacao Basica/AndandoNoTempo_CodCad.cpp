#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a==b || a==c || b==c)
		cout<<"S";
	else if(a==b+c || b==c+a || c==a+b)
		cout<<"S";
	else
		cout<<"N";	
	
	return 0;
}
