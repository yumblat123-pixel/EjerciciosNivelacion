#include<iostream>
using namespace std;
int main(){
    int nota;
    do{
        cout << "Ingrese una nota (0-100): ";
        cin >> nota;
        if (nota < 0 || nota > 100) {
            cout << "Valor invalido. Intente de nuevo." << endl;
        }
    } while (nota < 0 || nota > 100);
    cout<<"Nota aceptada: "<<nota<<endl;
    return 0;
}