#include<iostream>
using namespace std;

int main(){
	int b,n,d,c,v;
	int reserva[20];
	while(true){
		cin>>b>>n;
		if(b==0 && n==0)
			break;
		for(int i=0;i<b;i++)
			cin>>reserva[i];
		for(int i=1;i<=n;i++){
			cin>>d>>c>>v;
			reserva[d-1]-=v;
			reserva[c-1]+=v;
		}
		int j;
		for(j=0;j<b;j++){
			if(reserva[j]<0)
				break;
		}
		if(j<b)
			cout<<"N"<<endl;
		else
			cout<<"S"<<endl;
			
	}
	return 0;
}