#include<iostream>
using namespace std;

int hanoi(int n){
	int contaHanoi=0;
	if(n==1)
		return ++contaHanoi;		
	else
		contaHanoi=contaHanoi+2*hanoi(n-1)+1;
	return contaHanoi;		
}

int main(){
	int n,contador=1;
	while(true){
		cin>>n;
		if(n==0)
			break;
		cout<<"Teste "<<contador<<endl;
		cout<<hanoi(n)<<endl;
		cout<<endl;
		contador++;
	}
	return 0;
}