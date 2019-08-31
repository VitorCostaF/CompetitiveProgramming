#include<iostream>
#include<cstring>

using namespace std;

int main() {
	int n, qtVivos=0;
	cin>>n;
	int p[n],vivos[n];
	memset(vivos,0,sizeof(vivos));
	
	for(int i=0;i<n;i++) {
		int li;
		cin>>li;
		p[i]=li;
	}
	if(n==1) {
		cout<<n<<endl;
		return 0;
	}	
	
	int j=n-2;
	for(int i=n-1;i>=0;i--) {
		if(i==j)
			j--;
		for(int k=j;k>=i-p[i];k--) {
			if(k<0)
				break;
			vivos[k]=-1;
		}
		if((i-p[i]-1)<=j)
			j=i-p[i]-1;
	}
	
	for(int i=0;i<n;i++) {
		if(vivos[i]==0)
			qtVivos++;
	}
	cout<<qtVivos<<endl;
	
	return 0;
}