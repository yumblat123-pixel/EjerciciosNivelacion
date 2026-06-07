#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cin >> filas >> columnas;

    // Crear matriz dinámica
    int** mat = new int*[filas];

    for (int i = 0; i < filas; i++) {
        mat[i] = new int[columnas];
    }

    // Llenar
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            mat[i][j] = i * j;
        }
    }

    // Imprimir
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < filas; i++) {
        delete[] mat[i];
    }

    delete[] mat;

    return 0;
}