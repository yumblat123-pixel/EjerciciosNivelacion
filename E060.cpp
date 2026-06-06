#include<iostream>
using namespace std;
void intercambiar(int*a,int*b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a=15;
    int b=40;
    cout<<"Antes: "<<a<<" "<<b<<endl;
    intercambiar(&a,&b);
    cout<<"Despues: "<<a<<" "<<b<<endl;
}