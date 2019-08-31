#include<iostream>
using namespace std;

int main() {
	string A;
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>A;
		if(A.size()>10) {
			string B="";	
			B.push_back(A[0]);
			B+=to_string(A.size()-2);
			B.push_back(A[A.size()-1]);
			cout<<B<<endl;
		}
		else
			cout<<A<<endl;
	}
	return 0;
}