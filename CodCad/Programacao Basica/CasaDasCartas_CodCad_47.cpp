#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
bool compara(int a,int b){
	if(a%m==b%m)
		return a/m>b/m;
	return a%m>b%m;
}

int main(){
	int vi;
	cin>>n>>m;
	int propinas[n];
	for(int i=0;i<n;i++)
		cin>>propinas[i];
	sort(propinas,propinas+n,compara);
	for(int i=0;i<n;i++)
		cout<<propinas[i]<<" ";
	cout<<endl;
	
	return 0;
}