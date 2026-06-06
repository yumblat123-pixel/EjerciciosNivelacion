
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;

    getline(cin, texto);

    cout << "Longitud: " << texto.length() << endl;

    for (int i = 0; i < texto.length(); i++) {
        texto[i] = toupper(texto[i]);
    }

    cout << "En mayusculas: " << texto << endl;

    return 0;
}