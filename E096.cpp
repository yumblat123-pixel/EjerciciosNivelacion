#include <iostream>
#include <iomanip>
using namespace std;

class Vector2D {
private:
    double x;
    double y;

public:
    Vector2D(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }

    // Sobrecarga de +
    Vector2D operator+(const Vector2D& otro) {
        return Vector2D(x + otro.x, y + otro.y);
    }

    // Sobrecarga de *
    double operator*(const Vector2D& otro) {
        return x * otro.x + y * otro.y;
    }

    // Sobrecarga de <<
    friend ostream& operator<<(ostream& os, const Vector2D& v) {
        os << "("
           << fixed << setprecision(2)
           << v.x << ", "
           << v.y << ")";
        return os;
    }
};

int main() {

    double x1, y1, x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    Vector2D v1(x1, y1);
    Vector2D v2(x2, y2);

    Vector2D suma = v1 + v2;
    double producto = v1 * v2;

    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    cout << "v1 + v2 = " << suma << endl;
    cout << "v1 · v2 = "
         << fixed << setprecision(2)
         << producto << endl;

    return 0;
}