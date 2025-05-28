// C Program to Find if Number is Divisible by 5
# include <iostream>
using namespace std;
int main()
{
    int a ;
    cout << "enter the number: \n ";
    cin >> a ;
    if(a % 5 == 0)
    {
        cout << a << " is divisible by 5 \n";
    }
    else 
    {
        cout << a << "is NOT divisible by 5 \n ";
    }

}