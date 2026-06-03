#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int num1;
    cout << "Ingrese un numero: ";
    cin >> num1;
    if (num1>0){
        cout << "El numero es positivo" << endl;
    } else if (num1<0){
        cout << "El numero es negativo" << endl;
    } else {
        cout << "El numero es cero" << endl;
    }
}