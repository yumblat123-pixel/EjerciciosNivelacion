#include <iostream>
#include <iomanip>
using namespace std;

int suma(int* arr, int n) {
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += *(arr + i);
    }

    return s;
}

double promedio(int* arr, int n) {
    return (double)suma(arr, n) / n;
}

void invertir(int* arr, int n) {
    for (int i = 0; i < n / 2; i++) {

        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;

    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Suma: " << suma(arr, n) << endl;

    cout << fixed << setprecision(2);
    cout << "Promedio: " << promedio(arr, n) << endl;

    invertir(arr, n);

    cout << "Invertido: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}