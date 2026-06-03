#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;
    cout << "Ingrese un numero del 1 al 12: ";
    cin >> a;
    switch(a){
        case 1:
            cout << "Mes 1: Enero" << endl;
            break;
        case 2:
            cout << "Mes 2: Febrero" << endl;
            break;
        case 3:
            cout << "Mes 3: Marzo" << endl;
            break;
        case 4:
            cout << "Mes 4: Abril" << endl;
            break;
        case 5:
            cout << "Mes 5: Mayo" << endl;
                break;
        case 6:
            cout << "Mes 6: Junio" << endl;
            break;
        case 7:
            cout << "Mes 7: Julio" << endl;
            break;
        case 8:
            cout << "Mes 8: Agosto" << endl;
            break;
        case 9:
            cout << "Mes 9: Septiembre" << endl;
            break;
        case 10:
            cout << "Mes 10: Octubre" << endl;
            break;
        case 11:
            cout << "Mes 11: Noviembre" << endl;
            break;
        case 12:
            cout << "Mes 12: Diciembre" << endl;
            break;
        default:
            cout << "El numero no corresponde a un mes" << endl;
    }
}