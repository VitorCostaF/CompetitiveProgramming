#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int propinas[n];
	int vetorFinal[n+10];
	for(int i=0;i<n;i++)
		cin>>propinas[i];
	sort(propinas,propinas+n);
	int j=-1;
	while(propinas[j+1]<m)
		j++;
	if(j!=-1){
		for(int i=0;i<=j/2;i++){
			int aux=propinas[i];
			propinas[i]=propinas[j-i];
			propinas[j-i]=aux;
		}
	}
	if(j!=-1)
		j++;
	for(int i=0;i<=(n-j-1)/2;i++){
		int aux=propinas[i+j+1];
		propinas[i+j+1]=propinas[n-i-1];
		propinas[n-i-1]=aux;
	}
	
	for(int h=0;h<n;h++)
		cout<<propinas[h]<<" ";
	cout<<endl;
	
	int k=0;
	int l=1;
	int i=0;
	while(k<=j && j+l<n){
		if(propinas[k]%m>propinas[j+l]%m){
			vetorFinal[i]=propinas[k];
			i++;
			k++;
		}
		else {
			vetorFinal[i]=propinas[j+l];
			i++;
			l++;
		}
	}
	if(k>j)
		for(i;i<n;i++){
			vetorFinal[i]=propinas[j+l];
			l++;
		}
	else
		for(i;i<n;i++){
			vetorFinal[i]=propinas[k];
			k++;
		}
	for(i=0;i<n;i++)
		cout<<vetorFinal[i]<<" ";
	cout<<endl;
		
	return 0;
}