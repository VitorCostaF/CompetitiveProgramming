#include<iostream>
using namespace std;

int main(){
	int n,r,min;
	cin>>n>>r;
	min=r;
	for(int i=2;i<=n;i++){
		cin>>r;
		if(r<min)
			min=r;
	}
	cout<<min;
	return 0;
}