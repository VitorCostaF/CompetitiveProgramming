#include<iostream>
using namespace std;

int main(){
	int h,p,f,d;
	cin>>h>>p>>f>>d;
	
	if(f<h){
		if(p>h){
			if(d==1) cout<<"S";
			else cout<<"N";
		}
		else if(p<f){
			if(d==1) cout<<"S";
			else cout<<"N";
		}
		else{
			if(d==1) cout<<"N";
			else cout<<"S";
		}
	}
	else{
		if(p<h){
			if(d==1) cout<<"N";
			else cout<<"S";
		}
		else if(p>f){
			if(d==1) cout<<"N";
			else cout<<"S";
		}
		else{
			if(d==1) cout<<"S";
			else cout<<"N";
		}
	}
	
	
	return 0;
}
