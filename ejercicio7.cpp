#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> num = {12, 15, 18, 21, 23, 55};

    cout <<" Los numeros son: "<< endl;
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << endl;
    }

    cout << endl;
    cout <<" Los numeros en orden invertido son: "<< endl;
    for (int i = num.size() - 1; i >= 0; i--) {
        cout << num[i] << endl;
    }

    return 0;
} 
