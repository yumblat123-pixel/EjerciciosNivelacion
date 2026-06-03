#include<iostream>
using namespace std;
bool esPrimo(int n){
    if (n <= 1) return false;
    for (int i=2; i<=n; i++){
        if (n % i == 0 && i != n && i != 1) return false;
    }
    return true;
}
int main(){
    int numero=50;
    cout << "Los numeros primos entre 1 y " << numero << " son: " << endl;
    for (int i=1; i<=numero; i++){
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    return 0;
}