#include <bits/stdc++.h>
using namespace std;

int n, q, m;
int num,a,b;

int main(){
	
	cin>>m;
	vector<int> resultados;
	for(int i=0; i<m; i++){
		cin>>n;
		cin>>q;
		if(q>=n)
			q=n-1;
		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		int max = -9999999;
		for(int i=0; i<n; i++){
			for(int j=0; j<n;j++){
				if(abs(i-j)-1<=q && max<abs(arr[i]-arr[j]) && i!=j)
					max=abs(arr[i]-arr[j]);
			}
		}
		resultados.push_back(max);
	}
	
	for(int n:resultados){
		cout<<n<<endl;
	}


	
	return 0;
}
