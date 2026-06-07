#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ofstream archivo("saludo.txt");
    archivo<<"Hola desde C++"<<endl;
    archivo<<"Aprendiendo archivos"<<endl;
    archivo<<"fstream es poderoso"<<endl;
    archivo.close();
    cout << "Archivo \"saludo.txt\" creado." << endl;
    cout << "3 lineas escritas." << endl;

    return 0;
}