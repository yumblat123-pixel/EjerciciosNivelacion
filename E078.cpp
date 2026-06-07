#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string* palabras = new string[N];

    for (int i = 0; i < N; i++) {
        cin >> palabras[i];
    }

    // Bubble Sort alfabético
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {

            if (palabras[j] > palabras[j + 1]) {

                string temp = palabras[j];
                palabras[j] = palabras[j + 1];
                palabras[j + 1] = temp;
            }
        }
    }

    cout << "Ordenado:" << endl;

    for (int i = 0; i < N; i++) {
        cout << palabras[i] << endl;
    }

    delete[] palabras;

    return 0;
}