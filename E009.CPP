#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,b,c;
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    cout << "Ingresa el tercer numero: ";
    cin >> c;
    double promedio = (a + b + c) / 3.0;
    cout << fixed << setprecision(2);
    cout << "El promedio: " << promedio << endl;
}