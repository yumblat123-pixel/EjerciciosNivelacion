#include<iostream>
using namespace std;
double areaRectangulo(double a,double b){
    cout<<"Base: "<<a<<"Altura: "<<b;
    return a*b;
}
double areaTriangulo(double a, double b){
    cout<<"Base: "<<a<<"Altura: "<<b;
    return (a*b)/2;
}
double areaCirculo(double r){
    cout<<"Radio: "<< r;
    double pi=3.141516;
    return pi*r*r;
}
int main(){
    int c;
    do{
        cout<<"==Calculadora de areas=="<<endl;
        cout<<"1. Rectangulo"<<endl;
        cout<<"2. Triangulo"<<endl;
        cout<<"3. Circulo"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>c;
        if (c==1){
            double a,b;
            cout<<"Ingrese base y altura:";
            cin>>a>>b;
            double area = areaRectangulo(a,b);
            cout<<"\nArea: "<<area<<endl;
        }
        else if(c==2){
              double a,b;
            cout<<"Ingrese base y altura:";
            cin>>a>>b;
            double area = areaTriangulo(a,b);
            cout<<"\nArea: "<<area<<endl;
        }
        else if (c==3){
        double r;
        cout<<"Ingrese radio:";
            cin>>r;
            double area = areaCirculo(r);
            cout<<"\nArea: "<<area<<endl;
        }
    }
    while(c!=4);
    cout<<"Hasta pronto";
}