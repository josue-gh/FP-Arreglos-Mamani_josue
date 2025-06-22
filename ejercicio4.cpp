#include<iostream>
#include<string>

using namespace std;

int main(){
	
	
	int i, j, cantidad;
	string  auxiliar;
	
	cout<<"cuantos nombres va a ingresar "<<endl;
	cin>> cantidad;
	cin.ignore();
	
	cout<<endl;
	cout<<"ingrese los nombres: "<<endl;
	
	string nombre[cantidad];
	
	for (i=0; i<cantidad; i++){
		
		getline(cin, nombre[i]);
	}
	
	for(i=0; i<cantidad-1; i++){
		
		for(j=i+1; j<cantidad; j++){
		
		if(nombre[i][0]> nombre[j][0] ){
		 swap(nombre[i], nombre[j]);
		}
		}
	}
	
	cout<<endl;
	
	cout<<"los nombres en orden alfabetico son: "<<endl;
	cout<<endl;
	for(i=0; i<cantidad; i++){
		
		cout<<nombre[i]<<endl;
	}
 
} 
