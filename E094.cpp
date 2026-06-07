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

    virtual ~Animal() {}
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

    Animal* animales[4];

    animales[0] = new Perro("Rex");
    animales[1] = new Gato("Luna");
    animales[2] = new Perro("Max");
    animales[3] = new Gato("Michi");

    for (int i = 0; i < 4; i++) {
        cout << animales[i]->getNombre() << ": ";
        animales[i]->hacerSonido();
    }

    for (int i = 0; i < 4; i++) {
        delete animales[i];
    }

    return 0;
}