// exception handling
# include <iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age :"<<endl;
    cin >> age;
    try
    {
        if(age<18)
        throw(age);
        else
        cout << "Access given" << endl;
    }
    catch(int a )
    {
        cout << "Access denied! Minimum age must be 18. but your age is "<<a<< "."<<endl;
    }
    return 0;
}