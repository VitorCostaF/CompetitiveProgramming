#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,count=0,j=0;
	cin>>n;
	int v[n];
	int vArr[n];
	int vf[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
		vArr[i]=v[i];
	}
	sort(vArr,vArr+n);
	for(int i=0;i<n;i++)
		if(v[i]!=vArr[i]){
			vf[j++]=v[i];
			count++;
		}
	sort(vf,vf+count);
	cout<<count<<endl;
	for(int i=0;i<count;i++)
		cout<<vf[i]<<" ";
	return 0;
}