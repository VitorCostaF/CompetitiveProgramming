#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n,m,bx,by,xi,yi;
	double x=0,y=0;
	
	cin>>n>>bx;
	for(int i=n-1;i>=0;i--) {
		cin>>xi;
		x+=xi*pow(bx,i);
	}
	
	cin>>m>>by;
	for(int i=m-1;i>=0;i--) {
		cin>>yi;
		y+=yi*pow(by,i);
	}
	if(x>y)
		cout<<">"<<endl;
	else if(x<y)
		cout<<"<"<<endl;
	else
		cout<<"="<<endl;
	return 0;
}