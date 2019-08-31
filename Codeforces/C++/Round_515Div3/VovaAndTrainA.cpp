#include<iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++) {
		int Li,vi,ri,li,lanTotal,lanTamp;
		cin>>Li>>vi>>li>>ri;
		lanTotal=Li/vi;
		
		if((ri-li)/vi==0) {
			if( ((li-li%vi+vi)<=ri || li%vi==0) && lanTotal!=0 ) {
				cout<<lanTotal-1<<endl;
			}
			else
				cout<<lanTotal<<endl;
			continue;
		}
		lanTamp=(ri-li)/vi;
		if(ri%vi==0 || li%vi==0)
			lanTamp++;
		cout<<lanTotal-lanTamp<<endl;
	}
	return 0;
}