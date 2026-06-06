#include <iostream>
using namespace std;
void llenarCuadrado(int*arr,int n){
    for(int i=0;i<n;i++){
        arr[i]=i*i;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    llenarCuadrado(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}