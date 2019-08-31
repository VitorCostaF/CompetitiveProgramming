#include<iostream>
using namespace std;

int main(){
	int h1,m1,h2,m2;
	cin>>h1>>m1>>h2>>m2;
	while(h1!=0 or h2!=0 or m1!=0 or m2!=0){
		if(h2<h1 or (h2==h1 && m2<m1))
			h2+=24;
		cout<<(h2-h1)*60+m2-m1<<endl;
		cin>>h1>>m1>>h2>>m2;
	}
	return 0;
}