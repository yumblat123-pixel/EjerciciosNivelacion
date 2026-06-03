#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int maximo = n;
    int minimo = n;
    for (int i=1; i<=n; i++){
        int num;
        cin >> num;
        if (num>maximo){
            maximo = num;
        }
        if (num<minimo){
            minimo = num;
        }
    }
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
}