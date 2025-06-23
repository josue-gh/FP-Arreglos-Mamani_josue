#include<iostream>
#include<vector>

using namespace std;

bool ordenado(int longitud, vector<int>& elementos){
	
bool ascendente= true;
bool descendente = true ;

for(int i=0; i<longitud; i++){

if( elementos[i] < elementos[i+1]){
descendente= false;

}else if(elementos[i] > elementos[i+1]){
ascendente = false;

}

}

if(ascendente and descendente ==false){

return false;

}else {

 return true;
}

}


int main(){

int can, num; 
bool orden;

vector<int>numero ;

cout<<"ingrese la cantidad de numeros "<<endl;
cin>> can;

cout<<"ingrese los numeros "<<endl;
for(int i=0; i<can; i++){
cin>>num;
numero.push_back(num);
}

orden= ordenado(can, numero);

if( orden== true){
cout<<"los numeros ingresados estan ordenados "<<endl;
}else{
cout<<"los numeros ingresados no estan ordenados "<<endl;
}

return 0;
} 
