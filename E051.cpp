#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string texto;

    getline(cin, texto);
    int palabras=1;

    for (int i = 1; i < texto.length(); i++) {
        if(texto[i]==' '){
            palabras++;
        }
    }

    cout << "Palabras " << palabras << endl;

    return 0;
}