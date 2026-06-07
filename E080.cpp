#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string* nombres = new string[N];
    double* notas = new double[N];

    for (int i = 0; i < N; i++) {
        cin >> nombres[i] >> notas[i];
    }

    // Bubble Sort descendente por nota
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {

            if (notas[j] < notas[j + 1]) {

                double tempNota = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = tempNota;

                string tempNombre = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = tempNombre;
            }
        }
    }

    cout << fixed << setprecision(2);

    cout << "=== Ranking ===" << endl;

    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". "
             << nombres[i]
             << " - "
             << notas[i]
             << endl;
    }

    delete[] nombres;
    delete[] notas;

    cout << "Memoria liberada." << endl;

    return 0;
}