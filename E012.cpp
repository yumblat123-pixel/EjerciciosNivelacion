#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int nota;
    cout << "Ingrese la nota del alumno: ";
    cin >> nota;
    if (nota >= 90 && nota <= 100){
        cout << "La nota es A" << endl;
    } else if (nota >= 80 && nota < 90){
        cout << "La nota es B" << endl;
    } else if (nota >= 70 && nota < 80){
        cout << "La nota es C" << endl;
    } else if (nota >= 60 && nota < 70){
        cout << "La nota es D" << endl;
    } else if (nota >= 0 && nota < 60){
        cout << "La nota es F" << endl;
}
}