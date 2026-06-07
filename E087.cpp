#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream origen("estudiantes.txt");

    if (!origen) {
        cout << "No se pudo abrir estudiantes.txt" << endl;
        return 1;
    }

    ofstream respaldo("respaldo.txt");

    string linea;
    int contador = 0;

    while (getline(origen, linea)) {
        respaldo << linea << endl;
        contador++;
    }

    origen.close();
    respaldo.close();

    cout << "Copiadas "
         << contador
         << " lineas a \"respaldo.txt\"."
         << endl;

    return 0;
}