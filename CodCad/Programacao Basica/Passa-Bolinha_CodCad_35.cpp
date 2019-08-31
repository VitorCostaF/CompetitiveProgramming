#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,l,c,l1,c1,i=0,j=2;
	cin>>n;
	int m[n][n];
	int v[2*n*n+10];
	cin>>l>>c;
	l--;c--;
	l1=l;c1=c;
	
	memset(v,-1,sizeof(v));
	v[i]=l1;v[i+1]=c1;
	
	for(int a=0;a<n;a++)
		for(int b=0;b<n;b++)
			cin>>m[a][b];
		
	m[l1][c1]-=10;
	while(true){
		if(v[i]==-1 && v[i+1]==-1)
			break;
		l1=v[i]; c1=v[i+1];
		int aux=m[l1][c1]+10;
		if(c1+1<n){
			if(m[l1][c1+1]>=aux){
				m[l1][c1]=-1;
				v[j]=l1;
				v[j+1]=c1+1;
				m[l1][c1+1]-=10;
				j+=2;
			}
		}
		if(l1+1<n){
			if(m[l1+1][c1]>=aux){
				m[l1][c1]=-1;
				v[j]=l1+1;
				v[j+1]=c1;
				m[l1+1][c1]-=10;
				j+=2;
			}
		}
		if(c1-1>=0){
			if(m[l1][c1-1]>=aux){
				m[l1][c1]=-1;
				v[j]=l1;
				v[j+1]=c1-1;
				m[l1][c1-1]-=10;
				j+=2;
			}
		}
		if(l1-1>=0){
			if(m[l1-1][c1]>=aux){
				m[l1][c1]=-1;
				v[j]=l1-1;
				v[j+1]=c1;
				m[l1-1][c1]-=10;
				j+=2;
			}
		}
		i+=2;
	}
	
	cout<<i/2<<endl;
	
	return 0;
}