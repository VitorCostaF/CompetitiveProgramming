#include<iostream>
#include<queue>

using namespace std;

int main() {
	int n,m;
	queue<int> times;
	
	for(int i=1;i<=8;i++) {
		cin>>n>>m;
		int k = n>m ? 2*i-1 : 2*i;
		times.push(k);
	}
	int ganhador;
	while(true) {
		int a,b;
		
		a = times.front();
		times.pop();
		if(times.empty()==true) {
			ganhador = a;
			break;
		}
		b = times.front();
		times.pop();
		
		cin>>n>>m;
		
		ganhador = n>m ? a : b;
		times.push(ganhador);
	}
	char ganhadorLetra = ganhador+64;
	cout<<ganhadorLetra<<endl;
	return 0;
}