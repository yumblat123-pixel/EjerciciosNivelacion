#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string linea;

    getline(cin, linea);

    ofstream archivo("registro.txt", ios::app);

    archivo << linea << endl;

    archivo.close();

    cout << "Linea agregada a \"registro.txt\"." << endl;

    return 0;
}