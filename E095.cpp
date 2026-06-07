#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double calcularArea() = 0;
    virtual double calcularPerimetro() = 0;

    virtual void describir() {
        cout << "Area=" << calcularArea()
             << ", Perimetro=" << calcularPerimetro();
    }

    virtual ~Figura() {}
};

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(double r) {
        radio = r;
    }

    double calcularArea() override {
        const double PI = 3.14159;
        return PI * radio * radio;
    }

    double calcularPerimetro() override {
        const double PI = 3.14159;
        return 2 * PI * radio;
    }

    void describir() override {
        cout << fixed << setprecision(2);
        cout << "Circulo (r=" << radio << "): ";
        cout << "Area=" << calcularArea()
             << ", Perimetro=" << calcularPerimetro()
             << endl;
    }
};

class Triangulo : public Figura {
private:
    double a, b, c;

public:
    Triangulo(double x, double y, double z) {
        a = x;
        b = y;
        c = z;
    }

    double calcularPerimetro() override {
        return a + b + c;
    }

    double calcularArea() override {
        double s = calcularPerimetro() / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void describir() override {
        cout << fixed << setprecision(2);
        cout << "Triangulo ("
             << a << ","
             << b << ","
             << c << "): ";

        cout << "Area=" << calcularArea()
             << ", Perimetro=" << calcularPerimetro()
             << endl;
    }
};

int main() {

    double r;
    cin >> r;

    double a, b, c;
    cin >> a >> b >> c;

    Circulo circulo(r);
    Triangulo triangulo(a, b, c);

    circulo.describir();
    triangulo.describir();

    return 0;
}