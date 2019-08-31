/* 
	Problema 58, "Sorvete", da parte sobre Pair do site CodCad 
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int p,s,u,v;
	cin>>p>>s;
	vector<pair<int,int>> sorveteiros;
	
	if(p==0) {
		cout<<0<<" "<<0<<endl<<endl;
		return 0;
	}
	
	for(int i=0;i<s;i++) {
		cin>>u>>v;
		sorveteiros.push_back(make_pair(u,v));
	}
	sort(sorveteiros.begin(),sorveteiros.end());
	
	int inicio,fim;
	inicio=sorveteiros[0].first;
	fim=sorveteiros[0].second;
	
	for(int i=1;i<sorveteiros.size();i++) {
		if(sorveteiros[i].first<=fim) {
			if(fim<sorveteiros[i].second)
				fim = sorveteiros[i].second;		
		} 
		else {
			cout<<inicio<<" "<<fim<<endl;
			inicio=sorveteiros[i].first;
			fim=sorveteiros[i].second;
		}
	}
	cout<<inicio<<" "<<fim<<endl;
	cout<<endl;
	
	return 0;
}