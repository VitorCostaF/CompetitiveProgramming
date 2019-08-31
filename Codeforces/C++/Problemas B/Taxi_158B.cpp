//-----------------------------------
//		 	Codeforces
// VK Cup 2012 Qualification Round 1
// 		Problem 158: B. Taxi
//-----------------------------------

#include<iostream>

using namespace std;

int main() {
	int n,um,dois,tres,taxis;
	um=dois=tres=taxis=0;
	cin>>n;
	
	for(int i=0;i<n;i++) {
		int si;
		cin>>si;
		switch(si) {
		case 1:
			um++;
			break;
		case 2:
			dois++;
			break;
		case 3:
			tres++;
			break;
		default:
			taxis++;
		}
	}
	if(um>tres) 
		um-=tres;
	else
		um=0;
	taxis+=tres;
	taxis+=(um+2*dois)/4;
	if((um+2*dois)%4!=0)
		taxis++;
	cout<<taxis<<endl;
	return 0;
}