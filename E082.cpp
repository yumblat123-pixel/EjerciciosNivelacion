#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ofstream archivo("poema.txt");
    archivo<<"Las rosas son rojas"<<endl;
    archivo<<"El mar es profundo"<<endl;
    archivo<<"El codigo es logica"<<endl;
    archivo<<"C++ es poderoso"<<endl;
    archivo.close();
    ifstream entrada("poema.txt");
  string linea;
  int i=1;
  while (getline(entrada, linea)) { 
      cout << i<<". "<<linea << endl;
      i++;
  }
  entrada.close();
}