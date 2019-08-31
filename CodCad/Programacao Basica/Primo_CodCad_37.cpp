#include <iostream>

using namespace std;

bool eh_primo(int x){
	if(x==1)
		return false;
	if(x==2 || x==3)
		return true;
	if(x%2==0 || x%3==0)
		return false;
	for(int i=5;i*i<x;i=i+2)
		if(x%i==0)
			return false;
	return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout<<"S"<<"\n";
	}else{
		cout<<"N"<<"\n";
	}
}