# include <iostream>
# include<cmath>
using namespace std;
int main()
{
    int  n1,n2,choice , sum =0 ;
    cout << " enter 1st number:\n";
    cin >> n1;
    cout << " \n enter 2nd number :";
    cin >> n2;
    cout<<"\n enter the operator : (1 = +, 2 = -,3 = *,4 = /):";
    cin >> choice;
    switch(choice){
        case 1:
        {   
            sum = n1 + n2;
            cout << sum ;
            break;
        }
        case 2:
        {
            sum = n1 - n2 ;
            cout << sum ;
            break;
        }
        case 3:
        {
            sum = n1 *n2;
            cout << sum ;
            break;
        }
        case 4:
        {
            sum  = n1 /n2;
            cout << sum ;
            break;
        }

        default :
           cout << "must add from +,-,*,/" ;
        
    }
    return 0;

}