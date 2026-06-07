#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string nombre;

public:
    Animal(string n) {
        nombre = n;
    }

    virtual void hacerSonido() {
        cout << "..." << endl;
    }

    string getNombre() {
        return nombre;
    }
};

class Perro : public Animal {
public:
    Perro(string n) : Animal(n) {}

    void hacerSonido() override {
        cout << "Guau!" << endl;
    }
};

class Gato : public Animal {
public:
    Gato(string n) : Animal(n) {}

    void hacerSonido() override {
        cout << "Miau!" << endl;
    }
};

int main() {

    Perro perro("Rex");
    Gato gato("Luna");

    cout << "Perro (" << perro.getNombre() << "): ";
    perro.hacerSonido();

    cout << "Gato (" << gato.getNombre() << "): ";
    gato.hacerSonido();

    return 0;
}