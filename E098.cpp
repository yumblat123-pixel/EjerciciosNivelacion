#include <iostream>
#include <string>
using namespace std;

class Volador {
public:
    virtual void volar() {
        cout << "Fiu fiu!" << endl;
    }
};

class Nadador {
public:
    virtual void nadar() {
        cout << "Splash splash!" << endl;
    }
};

class Pato : public Volador, public Nadador {
private:
    string nombre;

public:
    Pato(string n) {
        nombre = n;
    }

    string getNombre() {
        return nombre;
    }
};

int main() {

    Pato pato("Donald");

    cout << pato.getNombre() << " vuela: ";
    pato.volar();

    cout << pato.getNombre() << " nada: ";
    pato.nadar();

    return 0;
}