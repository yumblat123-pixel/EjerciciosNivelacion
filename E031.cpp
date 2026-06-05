#include<iostream>
#include<iomanip>
using namespace std;
void calcularCiruclo(double radio,double&area, double&per){
double pi=3.1416;
area=pi*radio*radio;
per=2*pi*radio;
}
int main(){
    int radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    double area, per;
    calcularCiruclo(radio,area,per);
    cout<<fixed<<setprecision(2);
    cout << "Área: " << area << endl;
    cout << "Perímetro: " << per << endl;
    cout <<"Radio: " << radio << endl;
    return 0;
}