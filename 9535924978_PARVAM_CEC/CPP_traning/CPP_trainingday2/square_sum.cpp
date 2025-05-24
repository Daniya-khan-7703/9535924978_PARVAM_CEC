# include <iostream>
using namespace std;
int main()
{
    int n , i , sum = 0 ;
    cout << "enter the numbers you want to sum \n ";
    cin >> n;
    
    for ( i = 0; i<=n ; i++)
    {
        sum  = sum + (i*i) ;
        
    }
    cout << "sum of square is  : "<< sum << endl;
    return 0;
} 