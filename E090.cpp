#include <iostream>
#include <iomanip>
using namespace std;

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double saldoInicial) {
        saldo = saldoInicial;
    }

    void depositar(double monto) {
        if (monto > 0) {
            saldo += monto;
            cout << "Deposito OK. Saldo: $"
                 << fixed << setprecision(2)
                 << saldo << endl;
        }
        else {
            cout << "Error: monto invalido." << endl;
        }
    }

    void retirar(double monto) {
        if (monto <= 0) {
            cout << "Error: monto invalido." << endl;
        }
        else if (monto > saldo) {
            cout << "Error: saldo insuficiente. Saldo: $"
                 << fixed << setprecision(2)
                 << saldo << endl;
        }
        else {
            saldo -= monto;
            cout << "Retiro OK. Saldo: $"
                 << fixed << setprecision(2)
                 << saldo << endl;
        }
    }

    double getSaldo() {
        return saldo;
    }
};

int main() {

    double saldoInicial;
    cin >> saldoInicial;

    CuentaBancaria cuenta(saldoInicial);

    cout << fixed << setprecision(2);
    cout << "Saldo inicial: $" << cuenta.getSaldo() << endl;

    int opcion;

    do {
        cout << "=== Menu ===" << endl;
        cout << "1. Depositar  2. Retirar  3. Ver saldo  4. Salir" << endl;
        cout << "Opcion: ";

        cin >> opcion;

        double monto;

        switch(opcion) {

        case 1:
            cout << "Monto: ";
            cin >> monto;
            cuenta.depositar(monto);
            break;

        case 2:
            cout << "Monto: ";
            cin >> monto;
            cuenta.retirar(monto);
            break;

        case 3:
            cout << "Saldo actual: $"
                 << cuenta.getSaldo()
                 << endl;
            break;

        case 4:
            cout << "Hasta pronto." << endl;
            break;

        default:
            cout << "Opcion invalida." << endl;
        }

    } while(opcion != 4);

    return 0;
}