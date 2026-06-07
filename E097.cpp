#include <iostream>
using namespace std;

class Contador {
private:
    static int total;

public:
    Contador() {
        total++;

        if (total == 1)
            cout << "(crear A) Total objetos: " << total << endl;
        else if (total == 2)
            cout << "(crear B) Total objetos: " << total << endl;
        else if (total == 3)
            cout << "(crear C) Total objetos: " << total << endl;
    }

    ~Contador() {
        if (total == 3)
            cout << "(destruir C) Total objetos: " << total - 1 << endl;
        else if (total == 2)
            cout << "(destruir B) Total objetos: " << total - 1 << endl;
        else if (total == 1)
            cout << "(destruir A) Total objetos: " << total - 1 << endl;

        total--;
    }

    static int getTotal() {
        return total;
    }
};

int Contador::total = 0;

int main() {

    cout << "Total objetos: "
         << Contador::getTotal()
         << endl;

    {
        Contador a;
        Contador b;
        Contador c;
    }

    return 0;
}