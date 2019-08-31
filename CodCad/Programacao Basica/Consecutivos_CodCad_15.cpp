#include<iostream>
using namespace std;

int main(){
	int n,v,count=1,mem,max=1;
	cin>>n;
	cin>>v;
	mem=v;
	for(int i=2;i<=n;i++){
		cin>>v;
		if(v==mem){
			count++;
			if(count>max)
				max=count;
		}
		else{
			mem=v;
			count=1;
		}
		
	}
	cout<<max<<endl;
	return 0;
}