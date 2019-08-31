#include<iostream>
using namespace std;

int main(){
	int L1,A1,L2,A2;
	cin>>L1>>A1>>L2>>A2;
	if((L1*A1)>(L2*A2)) cout<<"Primeiro"<<endl;
	else if((L1*A1)<(L2*A2)) cout<<"Segundo"<<endl;
	else cout<<"Empate"<<endl;
	return 0;
}
