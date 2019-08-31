#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compara(string a, string b) {
	if(a.size()<=b.size()){
		/*int i,j,k;
		for(k=0;k<b.size();k++) {
			j=k;
			i=0;
			while(i<a.size() && j<b.size()) {
				if(a[i]==b[j]) {
					i++;
					j++;
				}
				else 
					break;
			}
			if(i==a.size())
				return true;
		}
		return false;*/
		int i=0,j=0,k=0;
		while(i<a.size() && j<b.size()) {
			if(a[i]==b[j]) {
				if(i==0) 
					k=j;
				i++;
				j++;
			}
			else if(i==0) {				
				j++;
			}
			else {	
				i=0;
				j=k+1;
			}
		}
		if(i<a.size())
			return false;
		else
			return true;
	}
	else 
		return compara(b,a);
}

bool arruma (string a, string b) {
	return a.size()<b.size();
}

int main() {
	int n;
	cin>>n;
	vector<string> vetor;
	for(int i=0;i<n;i++) {
		string aux;
		cin>>aux;
		vetor.push_back(aux);
	}
	if(n==1) {
		cout<<"YES"<<endl;
		cout<<vetor[0]<<endl;
		return 0;
	}
	
	sort(vetor.begin(),vetor.end(),arruma);

	for(int i=0;i<vetor.size()-1;i++)
		if(!compara(vetor[i],vetor[i+1])) {
			cout<<"NO";
			return 0;
		}
	
	cout<<"YES"<<endl;
	for(int i=0;i<vetor.size();i++)
		cout<<vetor[i]<<endl;
	
	return 0;
}