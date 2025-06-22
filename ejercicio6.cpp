#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int  sumP=0, sumI=0;

vector<int> num= {12, 11, 9, 8, 3, 5, 4, 13};

for(int i=0; i<num.size(); i++){
	
if(i %2==0){
sumP=sumP+ num[i];

}else{
	
sumI=sumI+ num[i];
}

}

cout<<"la suma de numeros de indice par es: "<<sumP<<endl;
cout<<endl;
cout<<"la suma de numeros de indice impar es: "<<sumI<<endl;

	return 0;
} 
