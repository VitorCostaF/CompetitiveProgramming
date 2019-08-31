#include<iostream>

using namespace std;

int main() {
	int n;
	long long cola=0, cap1=0,cap2=0;
	cin>>n;
	
	for(int i=0;i<n;i++) {
		long long ai;
		cin>>ai;
		cola+=ai;
	}
	
	for(int i=0;i<n;i++) {
		long long bi;
		cin>>bi;
		
		if(bi>cap1) {
			if(cap1>cap2)
				cap2=cap1;
			cap1=bi;
		}
		else if(bi>cap2) {
			cap2=bi;
		}
	}
	
	if(n==2) {
		cout<<"YES"<<endl;
		return 0;
	}
	
	if(cola>cap2+cap1) 
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}