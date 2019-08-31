#include<iostream>
using namespace std;

int main(){
	int n,soma1=0,soma2=0;
	cin>>n;
	int m[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>m[i][j];
	
	for(int i=0;i<n;i++)
		soma1+=m[0][i];
		
	for(int i=1;i<n;i++){
		soma2=0;
		for(int j=0;j<n;j++)
			soma2+=m[i][j];
		if(soma1!=soma2){
			cout<<-1<<endl;
			return 0;
		}
	}
	
	for(int i=0;i<n;i++){
		soma2=0;
		for(int j=0;j<n;j++)
			soma2+=m[j][i];
		if(soma1!=soma2){
			cout<<-1<<endl;
			return 0;
		}
	}
	soma2=0;
	for(int i=0;i<n;i++)
		soma2+=m[i][i];
	if(soma1!=soma2){
		cout<<-1<<endl;
		return 0;
	}
	soma2=0;
	for(int i=0;i<n;i++)
		soma2+=m[n-i-1][i];
	if(soma1!=soma2){
		cout<<-1<<endl;
		return 0;
	}
	cout<<soma1<<endl;
	return 0;
}