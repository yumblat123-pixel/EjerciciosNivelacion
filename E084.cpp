#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Crear archivo
    ofstream salida("texto.txt");

    salida << "La programacion es el arte de resolver problemas" << endl;
    salida << "C++ es un lenguaje potente y rapido" << endl;
    salida << "Aprender a programar abre muchas puertas" << endl;

    salida.close();

    // Contar lineas
    ifstream archivoLineas("texto.txt");

    string linea;
    int numLineas = 0;

    while (getline(archivoLineas, linea)) {
        numLineas++;
    }

    archivoLineas.close();

    // Contar palabras
    ifstream archivoPalabras("texto.txt");

    string palabra;
    int numPalabras = 0;

    while (archivoPalabras >> palabra) {
        numPalabras++;
    }

    archivoPalabras.close();

    cout << "Lineas: " << numLineas << endl;
    cout << "Palabras: " << numPalabras << endl;

    return 0;
}