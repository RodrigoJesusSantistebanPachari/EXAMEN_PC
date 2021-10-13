#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n, q;
ll num,a,b;
ll arbol[9999999];

void construirArbol(ll vec[]){
    for(ll i=0; i<n; i++)   
        arbol[n+i] = vec[i];
    for(ll i = n-1; i>0; --i)    
        arbol[i] = arbol[i<<1] + arbol[i<<1 | 1];   
}

void query1(ll pos, ll valor){
    arbol[pos+n] = valor;
    pos = pos+n;
    for (ll i=pos; i > 1; i >>= 1)
        arbol[i>>1] = arbol[i] + arbol[i^1];
}

ll query2(ll a, ll b){
    ll max = 0;
    for(a += n, b += n; a < b; a >>= 1, b >>= 1){
        if(a&1)
            max += arbol[a++];
        if(b&1)
            max += arbol[--b];
    }
    return max;
}


int main(){
	
	cin>>n;
	cin>>q;
	ll vec[n];
	//Leyendo input
    for(ll i=0; i<n; i++)
        cin>>vec[i];

	construirArbol(vec);
	
	for(ll i=0; i<q; i++){
		cin>>num;
		cin>>a;
		cin>>b;
		if(num==1)
			query1(a-1, b);
		else
			cout<<query2(a-1,b)<<endl;	
	}

	
	return 0;
}
