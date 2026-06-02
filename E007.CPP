#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout <<"Ingresa la temperatura en grados Celsius: ";
    double celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0)+ 32.0;
    cout << fixed << setprecision(1);
    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
}