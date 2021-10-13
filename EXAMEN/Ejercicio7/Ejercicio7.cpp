#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, q, m;
int num,a,b;

ll suma(vector<ll> vec, int a, int b){
	ll suma=0;
	for(int i=a-1; i<b;i++)
		suma+=vec[i];
	return suma;
}

int main(){
	
	cin>>n;
	cin>>q;
	vector<ll> vec (n);
	//Leyendo input
    for(int i=0; i<n ; i++)
        cin>>vec[i];
	
	for(int i=0; i<q; i++){
		cin>>num;
		cin>>a;
		cin>>b;
		if(num==1)
			reverse(vec.begin()+a-1, vec.begin()+b);
		else
			cout<<suma(vec,a,b)<<endl;
	}


	
	return 0;
}
