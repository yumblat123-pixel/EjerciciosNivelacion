#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string nombres[N];
    double promedio[N];
    bool mostrado[N];

    for (int i = 0; i < N; i++) {
        double n1, n2, n3;

        cin >> nombres[i];
        cin >> n1 >> n2 >> n3;

        promedio[i] = (n1 + n2 + n3) / 3.0;
        mostrado[i] = false;
    }

    cout << fixed << setprecision(2);
    cout << "=== Ranking de estudiantes ===" << endl;

    for (int puesto = 1; puesto <= N; puesto++) {

        int mejor = -1;

        for (int i = 0; i < N; i++) {

            if (!mostrado[i]) {

                if (mejor == -1 || promedio[i] > promedio[mejor]) {
                    mejor = i;
                }

            }
        }

        cout << puesto << ". "
             << nombres[mejor]
             << " - Promedio: "
             << promedio[mejor]
             << endl;

        mostrado[mejor] = true;
    }

    return 0;
}