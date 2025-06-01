// to convert celsius to farenheit and farenheit to celcius
# include <iostream>
using namespace std;
int main()
{
    int  num,celsius,far,choice;
    cout << "enter the temperature:" << endl;
    cin >> num;
    cout<<"enter a choice (1.convert to farenheit , 2.convert to celcius)"<<endl;
    cin >> choice;
    switch(choice){
        case 1:
        {
            far = (celsius * 9/5 )+32;
            cout << far <<" F";
            break;
        }
        case 2:
        {
            celsius = (far - 32) * 5/9;
            cout << celsius <<"C";
            break;
        }
        default:
        cout<<"enter the choice 1 or 2" << endl;
    }
    return 0;

}