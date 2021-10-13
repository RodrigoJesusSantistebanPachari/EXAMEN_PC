#include <bits/stdc++.h>

using namespace std;

void printVector(vector<long long int> v){
	for(auto n:v)
		cout<<n<<" ";
	
}

int MaximumSubarraySumII(vector<long long> &vec, int a, int b){
	
	multiset<long long> aux;
	long long maxi = -(numeric_limits<long long>::max());
	int n=vec.size();
	vector<long long> prefixsum(n+1);
	long long cont = 0; 
	for(long long i=1; i<=n; i++){
		cont = vec[i-1];
		prefixsum[i]=cont+prefixsum[i-1];
	}
	
	for(int i=a; i<n+1; i++){
		if(i > b){
			aux.erase(aux.find(prefixsum[i-1-b]));
		}
		aux.insert(prefixsum[i-a]);
		maxi = max(maxi, prefixsum[i]-*(aux.begin())); 
	}
	
	
	return maxi;
}

int main(){
	
	//O(n)
	
	int n,a,b;
	cin>>n; cin>>a; cin>>b;

    vector<long long> vec(n);
    
	//Leyendo input
    for(int i=0; i<n; i++)
        cin>>vec[i];
	
	cout<<MaximumSubarraySumII(vec,a,b);
	return 0;
}
