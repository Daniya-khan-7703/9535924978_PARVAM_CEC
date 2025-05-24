# include <iostream>
using namespace std;
int main()
{
    int p , t , r, si;
    cout << "enter the p,t,r values (where p = multiple of 1000, r = multiple of 1)\n ";
    cin >> p>> t>> r;
    si = (p*t*r)/100;
    cout << si ; 
    return 0;
    
}