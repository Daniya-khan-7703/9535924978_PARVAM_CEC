# include <iostream>
using namespace std;
int main()
{
    int n , i , sum = 1 ;
    cout << "enter the numbers you want to sum \n ";
    cin >> n;
    
    for ( i = 1; i<=n ; i++)
    {
        sum *= i;
        
    }
    cout << "factorial : "<< sum << endl;
} 