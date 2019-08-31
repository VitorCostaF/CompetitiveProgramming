#include<iostream>
using namespace std;

int problema3n_1(int n,int count){
	if(n==1)
		return count;
	if(n%2==0)
		count=problema3n_1(n/2,++count);
	else
		count=problema3n_1(3*n+1,++count);
	return count;
}

int main(){
	int n;
	cin>>n;
	cout<<problema3n_1(n,0)<<endl;
	return 0;
}