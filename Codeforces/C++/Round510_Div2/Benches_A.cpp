#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n,m,min,max,maxFinal;
	vector<int> benches;
	cin>>n>>m;
	
	for(int i=0;i<n;i++) {
		int ai;
		cin>>ai;
		benches.push_back(ai);
	}
	
	sort(benches.begin(),benches.end());
	max=benches[benches.size()-1];
	maxFinal = max + m;
	min=benches[0];
	
	int i=0;
	
	if(benches[0]<benches[benches.size()-1]) {
		while(m>0) {
			if(i==benches.size()-1)
				break;
			m-=(max-benches[i]);
			i++;
		}
	}
	min = max;
	if(m>0) {
		min+=m/n;
		if(m%n!=0)
			min++;
	}
	
	cout<<min<<" "<<maxFinal<<endl;
	return 0;
}