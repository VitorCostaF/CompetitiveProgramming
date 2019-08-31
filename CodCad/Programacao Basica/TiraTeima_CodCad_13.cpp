#include<iostream>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	if(x<0) cout<<"fora";
	else if(x>432) cout<<"fora";
	else if(y<0) cout<<"fora";
	else if(y>468) cout<<"fora";
	else cout<<"dentro";
	return 0;
}
