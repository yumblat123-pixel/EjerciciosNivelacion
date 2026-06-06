#include<iostream>
#include<array>
using namespace std;
int maximo(int arr[],int n){
int max=arr[0];
for(int i=0;i<n;i++){
if(max<arr[i]){
max=arr[i];}
}
return max;}
int minimo(int arr[],int n){
int min=arr[0];
for(int i=0;i<n;i++){
if(min>arr[i]){
min=arr[i];}
}
return min;}
double promedio(int arr[], int n){
    double suma=0;
    for(int i=0;i<n;i++){
    suma+=arr[i];
    }
    return suma/n;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximo:"<<maximo(arr,n)<<endl;
    cout<<"Minimo:"<<minimo(arr,n)<<endl;
    cout<<"Promedio:"<< promedio(arr,n)<<endl;
}
