#include<iostream>
#include<iomanip>
using namespace std;
double calcularPromedio(double a, double b, double c){
    return (a+b+c)/3;
}
double areaRectangulo(double base, double altura){
    return base*altura;
}
bool esMayorDeEdad(int edad){
    return edad>=18;
}
string clasificarEdad(int edad){
    if (edad<12){return "niño";}
    else if (edad<17){return "Adolescente";}
    else {return "Adulto";}
}
int main(){
    double a,b,c;
    double base,altura;
    int edad;
    edad=20;
    cout<<fixed<<setprecision(2);
    cout<<"Promedio de notas: "<<calcularPromedio(80,90,85)<<endl;
    cout<<"Area rectangulo: "<<areaRectangulo(6,4)<<endl;
     cout<<"Edad "<<edad<<":"<<clasificarEdad(edad);
     if (esMayorDeEdad(edad)){
        cout<<"(Mayor de edad)";
     } else {
        cout<<"(Es menor de edad)";
     }
cout<<endl;

}