#include<iostream>
#include<array>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n+1;i++){
        cout<<i<<". "<<arr[i]<<endl;
    }
}