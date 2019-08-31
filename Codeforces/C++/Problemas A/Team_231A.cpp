#include<iostream>

using namespace std;

int main() {
	int n;
	int cont=0;
	cin>>n;
	for(int i=0;i<n;i++) {
		int p,v,t;
		cin>>p>>v>>t;
		if(p+v+t>=2)
			cont++;
	}
	cout<<cont<<endl;
	return 0;
}