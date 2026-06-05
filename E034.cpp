#include<iostream>
using namespace std;
void imprimirLinea(int n=20, char c='-'){
    for (int i=0;i<=n;i++){
        cout<<c;
    }
}
int main(){
    imprimirLinea();
    cout<<endl;
    imprimirLinea(10);
    cout<<endl;
    imprimirLinea(5);
    cout<<endl;
    imprimirLinea(5,'*');
    return 0;
}