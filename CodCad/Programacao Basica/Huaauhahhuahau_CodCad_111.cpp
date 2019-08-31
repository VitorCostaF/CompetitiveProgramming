#include<iostream>
using namespace std;

int main(){
	string A,B="";
	cin>>A;
	for(int i=0;i<A.size();i++)
		if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
			B+=A[i];
	for(int i=0;i<B.size()/2;i++)
		if(B[i]!=B[B.size()-i-1]){
			cout<<'N'<<endl;
			return 0;
		}
	cout<<'S'<<endl;
	return 0;
}