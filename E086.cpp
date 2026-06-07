#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    ifstream archivo("estudiantes.txt");

    if (!archivo) {
        cout << "No se pudo abrir estudiantes.txt" << endl;
        return 1;
    }

    string buscado;
    cin >> buscado;

    string nombre;
    double nota;
    bool encontrado = false;

    while (archivo >> nombre >> nota) {

        if (nombre == buscado) {
            cout << fixed << setprecision(2);
            cout << "Estudiante encontrado: "
                 << nombre
                 << " - "
                 << nota
                 << endl;

            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Estudiante no encontrado." << endl;
    }

    archivo.close();

    return 0;
}