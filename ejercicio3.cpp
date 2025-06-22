#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int i, contador;
	string palabra;
	char letra;
	
	contador=0; 
	
	cout<<"ingrese la oracion "<<endl;
	
	getline(cin, palabra);
	
	cout<<endl;
	cout<<"ingrese la letra que desea contar su ocurrencia "<<endl;
	cin>> letra;
	cout<<endl;
	//realiza un bucle for que empieza desde 0 hasta la longitud de la palabra
	
	for(i=0; i<palabra.length(); i++){
		
		// realiza una condicion de si la letra elegida por el usuario es igual a la primera letra del arreglo
		if(letra==palabra[i]){
			
			//si es verdad el contador aumenta en 1
			contador ++;
		}
	}
	
	cout<<"la cantidad de "<< letra <<" que hay es: "<<endl;
	
	cout<<contador;
	
	return 0;
} 
