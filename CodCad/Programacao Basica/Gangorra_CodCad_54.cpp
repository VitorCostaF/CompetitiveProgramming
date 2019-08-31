#include<iostream>
using namespace std;

int main(){
	int pe,ce,pd,cd;
	cin>>pe>>ce>>pd>>cd;
	if(pe*ce>pd*cd) cout<<"-1";
	else if(pe*ce<pd*cd) cout<<"1";
	else cout<<"0";
	return 0;
}
