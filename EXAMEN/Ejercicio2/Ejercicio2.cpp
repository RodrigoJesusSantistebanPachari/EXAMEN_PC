#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q){
	vector<int> solution;
	int sol[3][S.size()+1];
	int aux[S.size()];
	for(int i=0; i<S.size(); i++){
		if(S[i]=='A')
			aux[i] = 1;
		else if(S[i]=='C')
			aux[i] = 2;
		else if(S[i]=='G')
			aux[i] = 3;
		else if(S[i]=='T')
			aux[i] = 4;
	}
	
	int aux1, aux2, aux3;
	for(int i=0; i<S.size(); i++){
		aux1 = 0;
		aux2 = 0;
		aux3 = 0;
		if(aux[i]==1)
			aux1 = 1;
		else if(aux[i]==2)
			aux2 = 1;
		else if(aux[i]==3)
			aux3 = 1;
		
		sol[0][i+1] = sol[0][i]+aux1;
		sol[1][i+1] = sol[1][i]+aux2;
		sol[2][i+1] = sol[2][i]+aux3;
	}
	
	
	int a, b;
	for(int i=0; i<P.size(); i++){
		a=P[i]; b=Q[i]+1;
		if(sol[0][b]-sol[0][a]>0)
			solution.push_back(1);
		else if(sol[1][b]-sol[1][a]>0)
			solution.push_back(2);
		else if(sol[2][b]-sol[2][a]>0)
			solution.push_back(3);
		else
			solution.push_back(4);
	}
	
	return solution;
}

int main(){

	//Entrada
	string S;
	cout<<"String: ";
	cin>>S;
	int M;
	cout<<"M: ";
	cin>>M;
    vector<int>	P(M);
    vector<int> Q(M);
    
    //Leyendo input
    cout<<"Vector P:"<<endl;
    for(int i=0; i<M; i++)
        cin>>P[i];
        
    cout<<"Vector Q:"<<endl;
    for(int i=0; i<M; i++)
        cin>>Q[i];
        
    cout<<"Salida"<<endl;
    vector<int> solucion = solution(S,P,Q);
	for(int n:solucion)
		cout<<n<<" ";
	
	return 0;
}
