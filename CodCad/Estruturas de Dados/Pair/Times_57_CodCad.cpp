#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool arruma(pair<int,string> pa,pair<int,string> pb) {
	return pa.second<pb.second;
}

int main() {
	int n,t;
	cin>>n>>t;
	vector< pair<int,string> > jogadores;
	
	for(int i=0;i<n;i++) {
		string nome;
		int habilidade;
		cin>>nome;
		cin>>habilidade;
		jogadores.push_back(make_pair(habilidade,nome));
	}
	
	sort(jogadores.begin(),jogadores.end());
	
	vector<pair<int,string>> times[t+1];
	
	for(int i=0;i<n;i++) {
		int j= i%t;
		pair<int,string> p = jogadores[jogadores.size()-1];
		times[j].push_back(p);
		jogadores.pop_back();
	}
	
	for(int i=0;i<t;i++) {
		sort(times[i].begin(),times[i].end(),arruma);
	}
	
	for(int i=0;i<t;i++) {
		cout<<"Time "<<i+1<<endl;
		for(int j=0;j<times[i].size();j++) {
			cout<<times[i][j].second<<endl;
		}
		cout<<endl;
	}
}