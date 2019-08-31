#include<iostream>

using namespace std;

int main() {
	string str, saida="";
	cin>>str;
	for(int i=0;i<str.size();i++) {
		if(str[i]!='a' && str[i] !='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' &&
			str[i]!='A' && str[i] !='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y') {
			if(str[i]>='b' && str[i]<='z') {
				saida+=".";
				saida+=str[i];
			}
			else {
				char caractere = str[i] + 32;
				saida+=".";
				saida+=caractere;
			}
		}
	}
	cout<<saida<<endl;
	return 0;
}