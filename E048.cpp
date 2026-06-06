#include<iostream>
#include<array>
using namespace std;
int main(){
    int matriz[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matriz[i][j];
        }
    }
    for(int i=0;i<3;i++){
        int sumarfila=0;
        for(int j=0;j<3;j++){
            sumarfila+=matriz[i][j];
        }
        cout<<"Sumar fila"<<i+1<<": "<< sumarfila<<endl;
    }
    for(int j=0;j<3;j++){
        int sumarcolumna =0;
        for(int i=0;i<3;i++){
            sumarcolumna+=matriz[i][j];
        }
        cout<<"Sumar columna"<<j+1<<": "<<sumarcolumna<<endl;
    }
}