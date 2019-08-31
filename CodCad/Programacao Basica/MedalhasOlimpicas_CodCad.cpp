#include<iostream>
using namespace std;

int main(){
	int oa,pa,ba,ob,pb,bb;
	cin>>oa>>pa>>ba>>ob>>pb>>bb;
	
	if(oa>ob) cout<<"A";
	else if(oa<ob) cout<<"B";
	else if(pa>pb) cout<<"A";
	else if(pa<pb) cout<<"B";
	else if(ba>bb) cout<<"A";
	else cout<<"B";
	return 0;
}
