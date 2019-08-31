#include<iostream>
using namespace std;

int main(){
	string A;
	cin>>A;
	for(int i=0;i<A.size();i++){
		if(A[i]>='A' && A[i]<='C')
			cout<<2;
		else if(A[i]>='D' && A[i]<='F')
			cout<<3;
		else if(A[i]>='G' && A[i]<='I')
			cout<<4;
		else if(A[i]>='J' && A[i]<='L')
			cout<<5;
		else if(A[i]>='M' && A[i]<='O')
			cout<<6;
		else if(A[i]>='P' && A[i]<='S')
			cout<<7;
		else if(A[i]>='T' && A[i]<='V')
			cout<<8;
		else if(A[i]>='W' && A[i]<='Z')
			cout<<9;
		else
			cout<<A[i];		
	}
	return 0;
}