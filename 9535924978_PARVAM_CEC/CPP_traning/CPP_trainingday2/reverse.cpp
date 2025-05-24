#include <iostream>
using namespace std;
int main()
{
    int digit,n,i,rev=0;
    cout << "enter the number:";
    cin >> n;
    while (n>0)
    {
        digit = n % 10;
        cout << digit << "\n";
        n = n /10 ;
        rev = rev * 10+ digit ;
        
    }
    cout << rev;
    return 0;
}