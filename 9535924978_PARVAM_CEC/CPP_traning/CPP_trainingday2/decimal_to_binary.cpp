#include <iostream>
# include <string>
using namespace std;
int main()
{
    int n,i;
    int binary[45];
    cout << "enter the number:";              
    cin >> n;
    while (n>0)
    {
        binary[i] = n % 2 ;  
        n = n /2 ;
        i++;
    }
    cout << "binary number :";
    for(int j=i-1;j>=n;j--)
    cout<<binary[j];

    return 0;
}

/* another case :
#include <iostream>
using namespace std;
int main()
{
    int digit,n,i,rev=0;
    cout << "enter the number:";
    cin >> n;
    while (n>0)
    {
        digit = n % 2;
        cout << digit << "\n";
        n = n /2 ;
        rev = rev * 10+ digit ;
        
    }
    cout << rev;
    return 0;
}
*/