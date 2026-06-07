#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int nuevo;
    cin >> nuevo;
    cout << "Original: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int* nuevoArr = new int[N + 1];
    for (int i = 0; i < N; i++) {
        nuevoArr[i] = arr[i];
    }
    nuevoArr[N] = nuevo;
    delete[] arr;
    arr = nuevoArr;

    cout << "Extendido: ";
    for (int i = 0; i < N + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}