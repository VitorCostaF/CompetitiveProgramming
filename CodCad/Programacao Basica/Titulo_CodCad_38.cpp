#include <iostream>

using namespace std;

string title(string F){
	if(F[0]>='a' && F[0]<='z')
		F[0]=F[0]-32;
	for(int i=1;i<F.size();i++){
		if(F[i-1]==' '){
			if(F[i]>='a' && F[i]<='z')
				F[i]=F[i]-32;
		}
		else
			if(F[i]>='A' && F[i]<='Z')
				F[i]=F[i]+32;
	}
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}