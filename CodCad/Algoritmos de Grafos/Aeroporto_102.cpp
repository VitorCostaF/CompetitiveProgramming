#include<iostream>
#include<algorithm>

using namespace std;

bool arruma(pair<int,int> p1,pair<int,int> p2) {
	if(p1.second == p2.second) 
		return p1.first < p2.first;
	return p1.second>p2.second;
}

int main() {
	int a,v,n=1;
	
	cin>>a>>v;
	while(a!=0 || v!=0) {
		cout<<"Teste "<<n<<endl;
		
		pair<int,int> vetor[a+2];
		
		for(int i=0;i<=a+1;i++) {
			vetor[i].first=i;
			vetor[i].second=0;
		}
		
		for(int i=1;i<=v;i++) {
			int x,y;
			cin>>x>>y;
			vetor[x].second++;
			vetor[y].second++;
		}
		
		sort(vetor+1,vetor+a+1,arruma);
		
		int i=1;
		while(vetor[i].second==vetor[1].second) {
			cout<<vetor[i].first<<" ";
			i++;
		}
		cout<<endl<<endl;
		n++;
		cin>>a>>v;
	}
	
	return 0;
}