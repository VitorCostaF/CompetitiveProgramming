#include<iostream>
using namespace std;

int main(){
	int cv,ce,cs,fv,fe,fs;
	cin>>cv>>ce>>cs>>fv>>fe>>fs;
	
	if((3*cv+ce)>(3*fv+fe)) cout<<"C";
	else if((3*cv+ce)<(3*fv+fe)) cout<<"F";
	else if(cs>fs) cout<<"C";
	else if(cs<fs) cout<<"F";
	else cout<<"=";
	return 0;
}
