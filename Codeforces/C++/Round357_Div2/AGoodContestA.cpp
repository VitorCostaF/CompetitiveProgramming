#include<iostream>

using namespace std;

int main() {
	string name;
	int before,after,n;
	bool yes = false;
	
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>name;
		cin>>before>>after;
		if(before>=2400 && after>before)
			yes=true;
	}
	if(yes)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	return 0;
}