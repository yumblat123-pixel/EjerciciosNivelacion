#include<iostream>
using namespace std;
double mayor(double a, double b){
 double m=a;
 if (b>m)m=b;
 cout<<"Mayor de 2:"<<m<<endl;
 return m;
}
double mayor(double a, double b, double c){
      double m = a;
      if (b>m) m = b;
      if (c>m) m = c;
      cout<<"Mayor de 3:"<<m<<endl;
      return m;
}
int main(){
    mayor(4.5,9.5);
    mayor(3.1,7.8,5.5);
}
