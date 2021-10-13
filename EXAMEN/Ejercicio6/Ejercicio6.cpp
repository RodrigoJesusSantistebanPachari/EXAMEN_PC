#include <bits/stdc++.h>
using namespace std;

int n,q;
string cad;
int num,a,b;
char car;

int main(){
	
	cin>>n;
	cin>>q;
	cad.reserve(n);
	cin>>cad;

	
	for(int i=0; i<q; i++){
		cin>>num;
		if(num==1){
			cin>>a;
			cin>>car;
			cad[a-1] = car;	
		}
		else{
			cin>>a;
			cin>>b;
			string sub = cad.substr(a-1,b-a+1);
			string aux = sub;
			reverse(aux.begin(),aux.end());
			if(sub == aux){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}	
	}

	
	return 0;
}
