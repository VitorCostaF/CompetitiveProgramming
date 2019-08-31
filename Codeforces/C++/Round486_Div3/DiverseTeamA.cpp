#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n,k;
	vector<int> Vn;
	pair<int,int> P;
	vector<pair<int,int>> Vk;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int aux;
		cin>>aux;
		Vn.push_back(aux);
	}
	P.first=Vn[0];
	P.second=1;
	Vk.push_back(P);
	int count=1;
	for(int i=1;i<Vn.size();i++) {
		int j;
		for(j=0;j<Vk.size();j++) {
			if(Vn[i]==Vk[j].first)
				break;
		}
		if(j==Vk.size()) {
			P.first=Vn[i];
			P.second=i+1;
			Vk.push_back(P);
			count++;
		}
	}
	if(count>=k) {
		cout<<"YES"<<endl;
		for(int i=0;i<k;i++)
			cout<<Vk[i].second<<" ";
		cout<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}