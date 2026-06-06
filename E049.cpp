#include<iostream>
#include<array>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >>matriz[i][j];
        }
    }

    int suma = 0;

    cout << "Diagonal principal: ";

    for (int i = 0; i < n; i++) {
        cout << matriz[i][i] << " ";
        suma += matriz[i][i];
    }

    cout << endl;
    cout << "Suma: " << suma << endl;

    return 0;
}
