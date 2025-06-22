#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	
	string num;
int dis=0;
bool esCapicua= true;
cout<<"ingrese un numero de 10 cifras "<<endl;

getline(cin, num);


//creamos un vector llamado digitos y dentro realizamos un iterador inicial
//llamado begin() junto con end() para colocar cada digito de tipo char en el vector
vector<char> digitos(num.begin(), num.end());

for(int i= 0; i<5; i++)
if ( digitos[i] != digitos[9-i]){
esCapicua= false;
break;
}

if( esCapicua==true){
cout<<"el numero es Capicua "<<endl;
}else if(esCapicua==false){
cout<<"el numero no es Capicua "<<endl;
}

return 0;
	
	
	return 0;
} 
