#include<iostream>


using namespace std;

int main()
{
int  cantidad, aux;

cout<<"ingrese la cantidad de numeros "<<endl;
cin >> cantidad;

//arreglo de los numeros dados por el usuario
int num[cantidad];

cout<<"ingrese los numeros "<<endl;
//bucle que empieza de 0 hasta la cantidad de numeros -1

for(int i=0; i< cantidad; i++){ 

cin>> num[i];
}

//parte en donde ordenamos la numeros de menor a mayor
for(int i=0; i<cantidad -1; i++){
for(int j=i+1; j<cantidad; j++){
if( num[i] > num[j]){
aux= num[i];
num[i]= num[j];
num[j] = aux;
}
}

}

cout<<endl;
//retornando el numero mayor y menor
cout<<"  el numero mayor es:  "<< num[cantidad-1];
cout<<endl;
cout<<"el numero menor es: "<<num[0];

return 0;

} 
