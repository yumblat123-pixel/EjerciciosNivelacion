#include <iostream>
using namespace std;

int* buscarDinamico(int* arr, int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            return &arr[i];
        }
    }

    return nullptr;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int val;
    cin >> val;

    int* p = buscarDinamico(arr, n, val);

    if (p != nullptr) {
        cout << "Elemento encontrado: " << *p << endl;
    } else {
        cout << "Elemento no encontrado." << endl;
    }

    delete[] arr;

    return 0;
}