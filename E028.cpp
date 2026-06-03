#include<iostream>
#include<iomanip>
using namespace std;
double calcularIMC(double peso, double altura){
    double IMC = peso / (altura * altura);
    cout << fixed << setprecision(2) << " IMC: " << IMC << endl;
    return IMC;
}
int main(){
    double peso,altura;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    calcularIMC(peso, altura);
    return 0;
}