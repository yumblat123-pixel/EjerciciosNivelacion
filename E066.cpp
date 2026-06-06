#include <iostream>
using namespace std;

int* buscarPtr(int* arr, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == valor) {
            return &arr[i];
        }
    }

    return nullptr;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int valor;
    cin >> valor;

    int* p = buscarPtr(arr, n, valor);

    if (p != nullptr) {
        cout << "Valor " << valor
             << " encontrado." << endl;
    } else {
        cout << "Valor " << valor
             << " no encontrado." << endl;
    }

    return 0;
}