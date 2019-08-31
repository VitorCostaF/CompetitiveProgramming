#include<iostream>
using namespace std;

int main(){
	int num,max;
	cin>>num;
	max=num;
	while(num){
		cin>>num;
		if(num>max)
			max=num;
	}
	cout<<max;
	return 0;
}