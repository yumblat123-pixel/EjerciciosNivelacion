#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int n;
cout << "Ingrese un numero: ";
cin >> n;
int a=0,b=1,siguiente;
for (int i=0; i<=n; i++){
    cout << a << " ";
    siguiente = a + b;
    a = b;
    b = siguiente; 
}
return 0;
}