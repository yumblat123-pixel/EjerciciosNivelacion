#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    ofstream archivo("estudiantes.txt");

    string nombre;
    double nota;

    for (int i = 0; i < N; i++) {
        cin >> nombre >> nota;
        archivo << nombre << " " << nota << endl;
    }
    archivo.close();

    cout << "Guardados " << N
         << " registros en \"estudiantes.txt\"."
         << endl;

    ifstream lectura("estudiantes.txt");

    cout << "Leyendo archivo:" << endl;

    cout << fixed << setprecision(2);

    while (lectura >> nombre >> nota) {
        cout << nombre
             << " - "
             << nota
             << endl;
    }

    lectura.close();

    return 0;
}