#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,m,a,l,h;
	long long int p;
	cin>>n>>m>>a;
	l=n/a;
	h=m/a;
	
	if(n%a!=0)
		l++;
	if(m%a!=0)
		h++;
	p=(long long int)l*((long long int)h);
	cout<<p;
	
	return 0;
}