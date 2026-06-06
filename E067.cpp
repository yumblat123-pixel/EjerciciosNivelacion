#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int opcion;
    cin >> opcion;

    int a, b;
    cin >> a >> b;

    int (*op)(int, int);

    if (opcion == 1) {
        op = sumar;
    }
    else if (opcion == 2) {
        op = restar;
    }
    else {
        op = multiplicar;
    }

    cout << "Resultado: " << op(a, b) << endl;

    return 0;
}