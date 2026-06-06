#include<iostream>
#include<array>
using namespace std;
int main(){
    int f;
    int c;
    cin>>f;
    cin>>c;
    int arr[f][c];
    for(int i=0;i<f;i++){
        for(int o=0;o<c;o++){
            cin>>arr[i][o];
        }
    }
    for(int i=0;i<f;i++){
        for(int o=0;o<c;o++){
            cout<<arr[i][o]<<" ";
        }
        cout<<endl;
    }
}