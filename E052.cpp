#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string palabra;

    getline(cin, palabra);
    int palabras=1;

   bool esPalindromo = true;

    for (int i = 0; i < palabra.length() / 2; i++) {
        if (palabra[i] != palabra[palabra.length() - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        cout << "\"" << palabra << "\" es palindromo." << endl;
    } else {
        cout << "\"" << palabra << "\" no es palindromo." << endl;
    }

    return 0;
}