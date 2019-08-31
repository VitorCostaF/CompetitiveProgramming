#include<iostream>
using namespace std;

int main(){
	int n,t,ti,s=0;
	cin>>n;
	cin>>ti;
	s=10;
	for(int i=2;i<=n;i++){
		cin>>t;
		if(t>ti+10)
			s+=10;
		else
			s+=(t-ti);
		ti=t;
	}
	cout<<s;
	return 0;
}