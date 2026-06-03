#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int suma = 0;
    for (int i=1; i<=n; i++){
        int num;
        cin >> num;
        suma += num;
    }
    cout <<"La suma total es: " << suma << endl;
}