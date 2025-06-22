#include<iostream>
#include<string>
#include<cctype>

using namespace std; 

int main(){
	
	string palabra;
	
	cout<<"ingrese una oracion "<<endl;
	
	getline (cin, palabra);
	
	cout<<endl;
	
	for(size_t i=0; i<palabra.length(); i++){
		
	if(isspace(palabra[i])){
		
		cout<< endl;
	}else{
		
		cout<< palabra[i];
	}
	}
	
}