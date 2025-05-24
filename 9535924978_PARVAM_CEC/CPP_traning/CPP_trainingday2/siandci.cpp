# include <iostream>
# include<cmath>
using namespace std;
int main()
{
    int p , t , r, si , ci ,n , choice;
    cout << "choose from the following options : \n 1.Simple_Interest \n 2.Compound_Interest \n 3.Both simple and compound interest ";
    cin >> choice;
    switch(choice){
        case 1:{
            cout << "enter the p,t,r values (where p = multiple of 1000, r = multiple of 1)\n ";
            cin >> p>> t>> r;
            si = (p*t*r)/100;
            cout << si ;
            break;
        }
        case 2:{
            cout << "enter the p,t,r,n values (where p = multiple of 1000, r = multiple of 1)\n ";
            cin >> p>> t>> r >> n;
            ci = (p * (1 + r/n )^((n*t))) ;
            cout << ci ; 
            break;
        }
        case 3:{
            cout << "enter the p,t,r values (where p = multiple of 1000, r = multiple of 1)\n ";
            cin >> p>> t>> r;
            si = (p*t*r)/100;
            cout << si<< endl ;
            cout << "enter the p,t,r,n values (where p = multiple of 1000, r = multiple of 1)\n ";
            cin >> p>> t>> r >> n;
            ci = (p * (1 + r/n )^((n*t))) ;
            cout << ci ;
            break;
        default :
           cout << "must add from 1,2,3" ;
        }
        }

}
    
