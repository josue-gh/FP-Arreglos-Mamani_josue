#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
string texto;

cout<<"ingrese una oracion en minuscula "<<endl;
getline (cin, texto);

int letra=1; 

for(size_t i=0; i< texto.length(); i++){

if(isspace(texto[i])){

letra= 1;
}else if(letra ==1 ){

texto[i] = toupper(texto[i]);
letra=0;
}
}

cout<<"la oracion nueva es: "<<endl;
cout<<endl;
cout<< texto;
    
    return 0;
} 
