# include <iostream>
using namespace std;
int main()
{
    int n , arr[20] , i,sum ;
    cout << "enter the numbers you want to sum";
    cin >> n;
    
    for ( i = 0; i<=n ; i++)
    {
        sum = sum +i;
        cout << "sum : " << sum ;
    }
    cout << "total sum :"<< sum << endl;
}    