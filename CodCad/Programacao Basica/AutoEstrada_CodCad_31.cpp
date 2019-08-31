#include<iostream>
using namespace std;

int main(){
	int n,count=0;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c;
		if(c=='P' || c=='C')
			count+=2;
		else if(c=='A')
			count+=1;
	}
	cout<<count;
	return 0;
}