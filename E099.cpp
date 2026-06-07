#include <iostream>
#include <iomanip>
using namespace std;

class Lista {
private:
    int* datos;
    int capacidad;
    int cantidad;

public:
    Lista(int cap) {
        capacidad = cap;
        cantidad = 0;
        datos = new int[capacidad];
    }

    ~Lista() {
        delete[] datos;
        cout << "Destructor: memoria liberada." << endl;
    }

    void agregar(int val) {
        if (cantidad < capacidad) {
            datos[cantidad] = val;
            cantidad++;
        } else {
            cout << "Lista llena." << endl;
        }
    }

    void imprimir() {
        cout << "Lista: ";

        for (int i = 0; i < cantidad; i++) {
            cout << datos[i] << " ";
        }

        cout << endl;
    }

    double promedio() {
        if (cantidad == 0)
            return 0;

        int suma = 0;

        for (int i = 0; i < cantidad; i++) {
            suma += datos[i];
        }

        return (double)suma / cantidad;
    }
};

int main() {

    int capacidad;
    cin >> capacidad;

    Lista lista(capacidad);

    for (int i = 0; i < capacidad; i++) {
        int valor;
        cin >> valor;
        lista.agregar(valor);
    }

    lista.imprimir();

    cout << fixed << setprecision(2);
    cout << "Promedio: "
         << lista.promedio()
         << endl;

    return 0;
}