#include<iostream>
using namespace std;
void interambiar(int&a,int&b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    a=5;
    b=12;
    cout << "Antes  a=" << a << ", b=" << b << endl;
    interambiar(a,b);
    cout << "Después : a=" << a << ", b=" << b << endl;
    return 0;
}