#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a;
    cout << "Ingrese el precio del producto: "; 
    cin >> a;
    int b;
    cout << "Ingrese la cantidad a comprar: ";
    cin >> b;
    double total = a * b;
    cout << fixed << setprecision(2);
    cout << "Total a pagar " << total << endl;
}