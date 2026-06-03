#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;
    int positivo=0;
    int negativo=0;
    while (a!=0){
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> a;
        if (a>0){
            positivo++;
        }
        else if (a<0){
            negativo++;
        }
    }
    cout << "Numeros positivos: " << positivo << endl;
    cout << "Numeros negativos: " << negativo << endl;
}