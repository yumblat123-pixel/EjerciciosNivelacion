#include<iostream>
#include<array>
using namespace std;
int main(){
    int n;
    cin>>n;
    int frecuencia[11]={0};
    for (int i=0;i<n;i++){
        int valor;
        cin>>valor;
        frecuencia[valor]++;
    }
    for(int i=0;i<=10;i++){
        cout<<"Valor"<<i<<": "<<frecuencia[i]<<" Veces "<<endl;
    }
}