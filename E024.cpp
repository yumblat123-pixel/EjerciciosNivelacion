#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int numero;
 do{
    cout<<"==Menu=="<<endl;
    cout<<"1. Saludar"<<endl;
    cout<<"2. Despedirse"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>numero;
    switch(numero){
        case 1:
            cout<<"¡Hola!"<<endl;
            break;
        case 2:
            cout<<"¡Hasta luego!"<<endl;
            break;
        case 3:
            cout<<"Saliendo del programa..."<<endl;
            break;
        default:
            cout<<"Opción no válida. Por favor, ingrese una opción del menú."<<endl;
    }
 }while(numero!=3);
 cout<<"¡Hasta luego!"<<endl;
 return 0;
}