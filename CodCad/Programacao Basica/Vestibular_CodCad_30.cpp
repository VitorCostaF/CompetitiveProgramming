#include<iostream>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	string A,B;
	cin>>A;
	cin>>B;
	for(int i=0;i<n;i++)
		if(A[i]==B[i])
			count++;
	cout<<count<<endl;
	return 0;
}