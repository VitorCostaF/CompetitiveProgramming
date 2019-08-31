#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,d,c,j;
	double max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>d>>c;
		double pot=c*log(d);
		if(pot>max){
			max=pot;
			j=i;			
		}
	}
	cout<<j<<endl;
	return 0;
}