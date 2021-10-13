#include <bits/stdc++.h>

using namespace std;

struct A{
	int pos;
	int val;
};

void NearestSmallerValues(vector<int> &vec){
	stack<A> pila;
	for(int i=0; i<vec.size(); ++i){
		A aux;
		aux.val = vec[i];
		aux.pos = i;
		while(!pila.empty() && pila.top().val >= vec[i])
			pila.pop();
		if(pila.empty())
			cout<<"0 ";
		else
			cout<<pila.top().pos+1<<" ";
		
		pila.push(aux);	
			
	}
}

int main(){
	
	int n;
	cin>>n;
	vector<int> vec(n);
	//Leyendo input
    for(int i=0; i<n; i++)
        cin>>vec[i];
        
	NearestSmallerValues(vec);
	
	return 0;
}
