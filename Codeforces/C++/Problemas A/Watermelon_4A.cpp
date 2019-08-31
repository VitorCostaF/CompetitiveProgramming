#include<iostream>

using namespace std;

int main() {
	int w;
	cin>>w;
	bool no=true;
	for(int i=2;i<w;i+=2)
		if((w-i)%2==0){
			cout<<"YES"<<endl;
			no=false;
			break;
		}
	if(no)
		cout<<"NO"<<endl;
	return 0;
}