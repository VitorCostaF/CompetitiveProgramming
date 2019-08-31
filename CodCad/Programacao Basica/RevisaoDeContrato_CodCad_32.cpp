#include<iostream>
using namespace std;

int main(){
	char c;
	string A,B="";
	
	while(true){
		cin>>c;
		cin>>A;
		if(c=='0' && A=="0")
			break;
		B="";
		for(int i=0;i<A.size();i++)
			if(c!=A[i])
				B+=A[i];
		int j=0;
		for(int i=0;i<B.size();i++)
			if(B[i]=='0')
				j++;
			else
				break;
		
		if(j==B.size())
			cout<<0;
		else
			for(int i=j;i<B.size();i++)
				cout<<B[i];
		cout<<endl;
	}
	return 0;
}