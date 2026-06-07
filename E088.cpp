#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int N;
    cin >> N;

    // Paso 1 y 2: guardar datos
    ofstream archivo("notas.txt");

    string nombre;
    double nota;

    for (int i = 0; i < N; i++) {
        cin >> nombre >> nota;
        archivo << nombre << " " << nota << endl;
    }

    archivo.close();

    cout << "Datos guardados en \"notas.txt\"." << endl;

    // Paso 3 y 4: leer y calcular promedio
    ifstream lectura("notas.txt");

    double suma = 0;
    int contador = 0;

    while (lectura >> nombre >> nota) {
        suma += nota;
        contador++;
    }

    lectura.close();

    double promedio = suma / contador;

    cout << fixed << setprecision(2);
    cout << "Promedio del grupo: "
         << promedio
         << endl;

    // Paso 5: agregar promedio al final del archivo
    ofstream agregar("notas.txt", ios::app);

    agregar << "Promedio " << promedio << endl;

    agregar.close();

    cout << "Promedio guardado en el archivo." << endl;

    return 0;
}