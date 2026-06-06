#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string nombres[N];
    double notas[N];
    for (int i = 0; i < N; i++) {
        cin >> nombres[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    int mejor = 0;

    for (int i = 1; i < N; i++) {
        if (notas[i] > notas[mejor]) {
            mejor = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Mejor estudiante: "
         << nombres[mejor]
         << " con nota "
         << notas[mejor]
         << endl;

    return 0;
}