#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout <<"Ingresa el nombre: ";
    string nombre;
    cin >> nombre;  
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Ingresa tu estatura en metros: ";
    double estatura;
    cin >> estatura;

    cout <<"==Ficha Personal==" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << fixed << setprecision(2);
    cout << "Estatura: " << estatura << " metros" << endl;
}