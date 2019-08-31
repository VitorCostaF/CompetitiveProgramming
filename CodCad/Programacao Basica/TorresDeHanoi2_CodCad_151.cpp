#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,contador=1;
	while(true){
		cin>>n;
		if(n==0)
			break;
		cout<<"Teste "<<contador<<endl;
		cout<<(int)pow(2,n)-1<<endl;
		cout<<endl;
		contador++;
	}
	return 0;
}