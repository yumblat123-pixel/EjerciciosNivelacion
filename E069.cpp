#include<iostream> 
using namespace std;
int main(){
 int* p = new int(99);
  cout << *p<<endl;
  cout<<&p<<endl;
  delete p;
  p = nullptr;
}