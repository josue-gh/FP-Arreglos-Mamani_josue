#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	
int n, i, aux;
double prom, mediana, sum;

int num[30] ;
sum= 0;

//agregando numeros al arreglo
for(i=0; i<30; i++){
	
n= rand() %901+100;
num[i]= n;
cout <<num[i]<<endl;

}

//realizando la suma para el promedio
for(int j=0; j<30; j++){
	
sum = sum+ num[j]; 

}
//mostrando el promedio
prom= sum/30;
cout<<"la suma de numeros es:  "<<sum<<endl;
cout<<endl;
cout<<"el promedio es:  "<<prom <<endl;

//ordenando valores de menor a mayor
for(int i=0; i<29; i++){
	for(int j=i+1; j<30; j++){
		
	if(num[i]>num[j]){
		
		aux=num[i];
		num[i]=num[j];
		num[j]=aux;
		}	
		}  
		}
		
//calculando la mediana y mostrando
mediana =(num[14]+num[15])/2;
cout<<endl;
cout<<"La mediana es: "<<mediana<<endl;

//desigando el tipo de variable
int moda = num[0], maxrep = 1, repact= 1;

//calculando la moda
for(int i = 1; i < 30; i++) {
	
    if (num[i] == num[i - 1]) {
    	
        repact=repact+1;
        
    } else {
    	
        if (repact > maxrep) {
        	
            maxrep = repact;
            moda = num[i - 1];
            
        }
		repact = 1; 
		}
		}
		
if (repact > maxrep) {
    
	maxrep = repact;
    moda = num[29];
	}
cout<<endl;	
cout <<"La moda es:  "<< moda<<endl;
cout <<" con " << maxrep << " repeticiones "<< endl;
return 0;} 
