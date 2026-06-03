#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string palabra;
    cout << "Ingrese una palabra: ";  
    cin >> palabra;
    int vocales = 0;
    for (int i=0; i<palabra.length(); i++){
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u' ||
            palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U') {
            
            vocales++;
        }
    }
    cout << "La palabra ingresada es: " << palabra << endl;
    cout << "Total de vocales: " << vocales << endl;
}