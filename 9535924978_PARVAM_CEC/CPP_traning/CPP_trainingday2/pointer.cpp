# include <iostream>
using namespace std;
int main(){
    int number = 30;
    int *p;
    p = &number;
    cout << "Value of the number:"<< number << endl;
    cout << "address of the number from pointer:"<< p<<endl;
    cout << "value of the number from pointer:"<<*p<< endl;
    cout << "Value of the Address of the pointer:"<<&p<<endl;
    return 0;
}