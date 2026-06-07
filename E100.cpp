#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Empleado {
protected:
    string nombre;
    double salario;

public:
    Empleado(string n, double s) {
        nombre = n;
        salario = s;
    }

    virtual double calcularBono() = 0;

    virtual void imprimir() = 0;

    virtual ~Empleado() {}
};

class Programador : public Empleado {
private:
    string lenguaje;

public:
    Programador(string n, double s, string l)
        : Empleado(n, s) {
        lenguaje = l;
    }

    double calcularBono() override {
        return salario * 0.10;
    }

    void imprimir() override {
        cout << nombre
             << " (Programador/"
             << lenguaje
             << "): Salario=$"
             << fixed << setprecision(2)
             << salario
             << ", Bono=$"
             << calcularBono()
             << endl;
    }
};

class Gerente : public Empleado {
private:
    string departamento;

public:
    Gerente(string n, double s, string d)
        : Empleado(n, s) {
        departamento = d;
    }

    double calcularBono() override {
        return salario * 0.20;
    }

    void imprimir() override {
        cout << nombre
             << " (Gerente/"
             << departamento
             << "): Salario=$"
             << fixed << setprecision(2)
             << salario
             << ", Bono=$"
             << calcularBono()
             << endl;
    }
};

int main() {

    Empleado* equipo[3];

    equipo[0] = new Programador("Ana", 3000, "Python");
    equipo[1] = new Gerente("Luis", 5000, "Sistemas");
    equipo[2] = new Programador("Carla", 2800, "C++");

    double totalBonos = 0;

    for (int i = 0; i < 3; i++) {
        equipo[i]->imprimir();
        totalBonos += equipo[i]->calcularBono();
    }

    cout << "-----------------------------" << endl;

    cout << "Total bonos a pagar: $"
         << fixed << setprecision(2)
         << totalBonos
         << endl;

    for (int i = 0; i < 3; i++) {
        delete equipo[i];
    }

    return 0;
}