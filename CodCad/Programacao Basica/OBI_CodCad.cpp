#include<iostream>
using namespace std;

int main(){
	int n,p,x,y,i=1,count=0;
	cin>>n>>p;
	while(i<=n){
		cin>>x>>y;
		if(x+y>=p) count++;
		i++;
	}
	cout<<count<<endl;
	return 0;
}