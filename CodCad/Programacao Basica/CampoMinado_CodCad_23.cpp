#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int vetorIn[n];
	int vetorOut[n];
	memset(vetorOut,0,n);
	for(int i=0;i<n;i++)
		cin>>vetorIn[i];
	if(n==1){
		vetorOut[0]=vetorIn[0];
		cout<<vetorOut[0];
		return 0;
	}	
	vetorOut[0]=vetorIn[0]+vetorIn[1];
	vetorOut[n-1]=vetorIn[n-2]+vetorIn[n-1];
	for(int i=1;i<n-1;i++)
		vetorOut[i]=vetorIn[i-1]+vetorIn[i]+vetorIn[i+1];
	for(int i=0;i<n;i++)
		cout<<vetorOut[i]<<endl;
	
	return 0;
}