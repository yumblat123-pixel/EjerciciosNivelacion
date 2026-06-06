#include<iostream>
using namespace std;
int main(){
    int x=42;
    int* p=&x;
     cout<<x<<endl;
    *p=99;
    cout<<x<<endl;
}