#include <bits\stdc++.h>
using namespace std;

string Japonizar(string palabra){
	string japonizado;
	
	for(int i=0; i<palabra.size(); i++){
		japonizado += palabra[i];
		if(palabra[i] != 'a' && palabra[i] != 'e' && palabra[i] != 'i' && palabra[i] != 'o' && palabra[i] != 'u' && palabra[i] != 'n' && palabra[i] != 'A' && palabra[i] != ' ' && palabra[i] != 'E' && palabra[i] != 'I' && palabra[i] != 'O' && palabra[i] != 'U' && palabra[i] != 'N'){
			if(palabra[i+1] != 'a' && palabra[i+1] != 'e' && palabra[i+1] != 'i' && palabra[i+1] != 'o' && palabra[i+1] != 'u' && palabra[i+1] != 'n' && palabra[i+1] != 'A' && palabra[i+1] != 'E' && palabra[i+1] != 'I' && palabra[i+1] != 'O' && palabra[i+1] != 'U' && palabra[i+1] != 'N'){
				japonizado += 'u';
		    }
		}
	}
	return japonizado;
}

int main(){
	int Numero;
	string Nombres;
	
	cout<<"ingrese un numero : ";
	cin>>Numero;
	
	int cont = Numero;
	while(cont != 0){
		
	cout<<"ingrese "<<cont<<" nombre/s : ";
	getline(cin,Nombres);
		
	cout<<"Konnichi wa, "<<Japonizar(Nombres)<<"-san"<<endl;
	cout<<endl;
	
	cont--;
	}
	return 0;
}
