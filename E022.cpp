#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int numero;
cout << "Ingrese un numero: ";
cin >> numero;
for (int i=1; i<=numero; i++){
    if (numero % i == 0 && i != numero && i != 1) {
        cout << "El numero no es primo." << endl;
        return 0;

    }

}
cout << "El numero es primo." << endl;
return 0;
}