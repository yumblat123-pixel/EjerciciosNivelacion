#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;
    cout << "Ingrese un numero: ";
    cin >> a;
    int factorial = 1;
    for (int i=1; i<=a; i++){
        factorial *= i;
        }
    cout << a << " != " << factorial << endl;
    }
