#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b && b<c) cout<<"1\n"<<"2\n"<<"3\n";
	else if(a<b && c<b && a<c) cout<<"1\n"<<"3\n"<<"2\n";
	else if(b<a && a<c) cout<<"2\n"<<"1\n"<<"3\n";
	else if(b<a && c<a && b<c) cout<<"2\n"<<"3\n"<<"1\n";
	else if(c<b && b<a) cout<<"3\n"<<"2\n"<<"1\n";
	else cout<<"3\n"<<"1\n"<<"2\n";
	return 0;
}
