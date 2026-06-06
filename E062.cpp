#include <iostream>
using namespace std;

int* encontrarMaximo(int arr[], int n) {
    int* maximo = &arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *maximo) {
            maximo = &arr[i];
        }
    }

    return maximo;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* pMax = encontrarMaximo(arr, n);

    cout << "Maximo encontrado: " << *pMax << endl;

    *pMax = *pMax * 2;

    cout << "Arreglo tras duplicar el maximo: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}