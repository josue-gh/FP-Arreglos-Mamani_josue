#include<iostream>

using namespace std;

int main()
{
int num, sum_g=0 , sum_p=0, sum_n=0, i, j;

cout<<"ingrese la cantidad de numeros "<<endl;
cin>> num;

int arr[num-1] ;
cout<<"ingrese los numeros "<<endl;
for(i=0; i<num; i++){
cin>> arr[i];

}

for(j=0; j<num; j++){
sum_g=sum_g + arr[j];
if(arr[j]>=0){

sum_p= sum_p + arr[j];
}else{
sum_n= sum_n + arr[j];
}

}

cout<<"la suma total es: "<<sum_g<<endl;
cout<<endl;
cout<<"la suma de positivos es: "<<sum_p<<endl;
cout<<endl;
cout<<"la suma de negativos es: "<<sum_n<<endl;

return 0;
}
 
