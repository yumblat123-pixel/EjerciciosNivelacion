#include <iostream>
using namespace std;

int main() {
    char palabra[100];

    cin >> palabra;

    char* p = palabra;
    int len = 0;

    while (*p != '\0') {
        len++;
        p++;
    }

    cout << "Palabra: " << palabra << endl;
    cout << "Longitud (manual): " << len << endl;

    return 0;
}