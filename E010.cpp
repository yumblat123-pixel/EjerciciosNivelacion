#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double radio;
cout << "Ingresa el radio del circulo: ";
cin >> radio;
double pi = 3.14159;
double area = pi * radio * radio;
double perimetro = 2 * pi * radio;
cout << fixed << setprecision(2);
cout << "El radio del circulo es: " << radio << endl;
cout << "El area del circulo es: " << area << endl;
cout << "El perimetro del circulo es: " << perimetro << endl;
}