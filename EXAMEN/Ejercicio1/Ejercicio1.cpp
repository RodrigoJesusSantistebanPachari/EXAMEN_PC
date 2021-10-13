#include <bits/stdc++.h>

using namespace std;

void MinAvgTwoSlice(vector<int> vec){
	
	int n = vec.size();
	float mini=(vec[0]+vec[1])/2.0;
	float prom;
	int it=0;
	
	for(int i=0; i<n-2; i++){
		
		prom=(vec[i]+vec[i+1])/2.0;
		if(prom<mini){
			mini = prom;
			it = i;
		}
		
		prom=(vec[i]+vec[i+1]+vec[i+2])/3.0;
		if(prom<mini){
			mini = prom;
			it = i;
		}
	}
	
	prom = (vec[n-2]+vec[n-1])/2.0;
	if(prom<mini){
		mini = prom;
		it = n-2;
	}
	
	cout<<mini<<endl;
	cout<<it;
}

int main(){
	
	//Entrada
	int n;
    cin>>n;
    vector<int>	vec(n);
    
    //Leyendo input
    for(int i=0; i<n; i++)
        cin>>vec[i];
    
    MinAvgTwoSlice(vec);
	
	return 0;
}
