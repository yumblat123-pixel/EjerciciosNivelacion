#include<iostream>
using namespace std;
int cuadrado(int n){
    return n*n;
}
int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El cuadrado de " << numero << " es: " << cuadrado(numero) << endl;
    return 0;
}