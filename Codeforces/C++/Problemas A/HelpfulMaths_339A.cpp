#include<iostream>

using namespace std;

int main() {
	string s,s2="";
	cin>>s;
	for(int j=1;j<=3;j++) {
		for(int i=0;i<s.size();i++) {
			if(s[i]-'0'==j) {
				s2+=s[i];
				if(s2.size()!=s.size())
					s2+='+';
			}
		}
	}
	cout<<s2<<endl;
	return 0;
}