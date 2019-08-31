#include<iostream>

using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++) {
		char c1,c2;
		c1 = (s1[i]>='a' && s2[i]<='z') ? s1[i] : s1[i]+32;
		c2 = (s2[i]>='a' && s2[i]<='z') ? s2[i] : s2[i]+32;
		if(c1<c2) {
			cout<<-1<<endl;
			return 0;
		} 
		else if(c1>c2){
			cout<<1<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
	return 0;
}