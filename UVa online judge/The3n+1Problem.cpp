//-------------------------------
//    	 UVa Online Judge
// 	  Volume 1 - Problem 100
// 	Problem: The 3n+1 problem 
//-------------------------------

#include<iostream>

using namespace std;

int cycle_length(int n) {
	int count=1;
	while(n!=1) {
		n = n%2==0 ? n/2 : 3*n+1;
		count++;
	}
	return ++count;
}


int main() {
	int max=0,i,j,inMin,inMax;
	string entrada;
	cin>>entrada;
	while(entrada!="\n") {
		string numeros = str_split
		i=entrada[0]-'0';
		j=entrada[2]-'0';
		if(i>j) {
			inMin=j;
			inMax=i;
		}
		else {
			inMin=i;
			inMax=j;
		}cout<<i<<" "<<j<<endl;
		for(int k=inMin;k<=inMax;k++) {
			int cycle = cycle_length(k);
			max = cycle>max ? cycle : max;
			
		}
		cout<<i<<" "<<j<<" "<<max<<endl;
		cin>>entrada;
	}
	return 0;
}
