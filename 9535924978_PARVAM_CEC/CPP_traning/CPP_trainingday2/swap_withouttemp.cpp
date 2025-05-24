# include <iostream>
using namespace std; 
int main(){
    int a = 7,b=2;
    //a = a+b;
   //b = a-b;
   // a = a-b;
    // a = a*b;
    // b = a/b;
    // a = a/b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
  cout<< a <<  "\n" << b;
}