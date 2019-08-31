#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	int criaturas[3];
	for(int i=0;i<3;i++)
		cin>>criaturas[i];
	sort(criaturas,criaturas+3);
	for(int i=0;i<3;i++){
		n-=criaturas[i];
		if(n>=0)
			count++;
		else
			break;
	}
	cout<<count<<endl;
	return 0;
}