# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    int   p , t , r, ci , n;
    cout << "enter the p,t,r values (where p = multiple of 1000, r = multiple of 1)\n ";
    cin >> p>> t>> r >> n;
    ci = (p * (1 + r/n )^((n*t))) ;
    cout << ci ; 
    return 0;
    
}