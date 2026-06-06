#include<iostream>
using namespace std;
void duplicar(int*p){
    *p=*p *2;
}
int main(){
    int x=7;
    cout<<x<<endl;
    duplicar(&x);
    cout<<x<<endl;
}