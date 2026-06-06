#include <iostream>
using namespace std;
void f1(int &n)  { n = n * 3; }
void f2(int* p)  { *p = *p * 3; }

int main(){
    int n=5;
    cout<<n;
    f1(n);
    cout<<n;
    f2(&n);
    cout<<n;
}