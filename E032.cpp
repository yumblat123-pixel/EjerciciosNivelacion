#include<iostream>
using namespace std;
double celsiuaFarenheit(double c){
    double farenheit=(c*9/5)+32;
    return farenheit;
};
double farenheitCelsius(double f){
    double celsius=(f-32)*5/9;
    return celsius;
};
void mostrarConversion(double valor,const char tipo){
    if (tipo == 'C'|| tipo == 'c')
        cout << valor << "°C = " << celsiuaFarenheit(valor) << "°F" << endl;
    else
        cout << valor << "°F = " << farenheitCelsius(valor) << "°C" << endl;
}
int main(){
    double valor;
    char tipo;
    cout << "Ingrese el valor a convertir: ";
    cin >> valor;
    cout << "Ingrese el tipo de conversión (C para Celsius a Farenheit, F para Farenheit a Celsius): ";
    cin >> tipo;
    mostrarConversion(valor, tipo);
    return 0;
}