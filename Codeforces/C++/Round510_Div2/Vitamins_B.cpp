#include<iostream>

using namespace std;

int main() {
	int n,ci;
	string vitamina;
	int A,B,C,AB,BC,AC,ABC;
	A=B=C=AB=BC=AC=ABC=300001;
	
	cin>>n;
	
	for(int i=0;i<n;i++) {
		cin>>ci;
		cin>>vitamina;
		if(vitamina.size()==1) {
			switch(vitamina[0]) {
			case 'A':
				if(ci<A) A=ci;
				break;
			case 'B':
				if(ci<B) B=ci;
				break;
			default:
				if(ci<C) C=ci;
			}
		}
		else if(vitamina.size()==2) {
			switch(vitamina[0]) {
			case 'A':
				if(vitamina[1]=='B') {
					if(ci<AB) AB=ci;
				}
				else
					if(ci<AC) AC=ci;
				break;
			case 'B':
				if(vitamina[1]=='A') {
					if(ci<AB) AB=ci;
				}
				else
					if(ci<BC) BC=ci;
				break;
			default:
				if(vitamina[1]=='B') {
					if(ci<BC) BC=ci;
				}
				else
					if(ci<AC) AC=ci;
			}
		}
		else 
			if(ci<ABC) ABC = ci;
	}
	if(A+B+C<ABC) 
		ABC = A+B+C;
	if(A+BC<ABC)
		ABC = A+BC;
	if(B+AC<ABC)
		ABC = B+AC;
	if(C+AB<ABC)
		ABC = C+AB;
	if(AB+BC<ABC)
		ABC=AB+BC;
	if(AC+BC<ABC)
		ABC=AC+BC;
	if(AC+AB<ABC)
		ABC=AC+AB;
	if(ABC<300001)
		cout<<ABC<<endl;
	else
		cout<<-1<<endl;
	
	return 0;
}